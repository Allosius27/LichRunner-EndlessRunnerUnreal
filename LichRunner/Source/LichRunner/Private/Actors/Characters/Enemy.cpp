// Fill out your copyright notice in the Description page of Project Settings.


#include "Actors/Characters/Enemy.h"

#include "Actors/Characters/RunCharacter.h"
#include "Actors/Characters/StatsComponent.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
AEnemy::AEnemy()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	StatsComponent = CreateDefaultSubobject<UStatsComponent>("GenericStatsComponent");

	DistanceAcceptanceToAttack = 150.0f;
	MaxDistanceToPlayer = 1000.0f;

	CanMove = true;

	DamagesMin = 3.0f;
	DamagesMax = 10.0f;

	ScorePointsAdded = 250.0f;
}



// Called when the game starts or when spawned
void AEnemy::BeginPlay()
{
	Super::BeginPlay();

	StatsComponent->DispatcherOnDeath.AddDynamic(this, &AEnemy::EnemyDeath);
}

// Called every frame
void AEnemy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if(PlayerCharacter == nullptr)
	{
		PlayerCharacter = UGameplayStatics::GetPlayerCharacter(GetWorld(), 0);
	}
	
	SetAttackState();

	CheckDistanceToPlayer();
}


void AEnemy::SetCanMove(bool value)
{
	CanMove = value;
}

float AEnemy::GetDamages()
{
	float damage = FMath::FRandRange(DamagesMin, DamagesMax);
	return damage;
}

void AEnemy::SetAttackState()
{
	if(StatsComponent->IsAlive)
	{
		if(FVector::Distance(GetActorLocation(), PlayerCharacter->GetActorLocation()) <= DistanceAcceptanceToAttack)
		{
			ARunCharacter* runCharacter = Cast<ARunCharacter>(PlayerCharacter);
			if(!IsAttacking && (runCharacter == nullptr || (runCharacter != nullptr && runCharacter->StatsComponent->IsAlive))) 
			{
				IsAttacking = true;
				SetCanMove(false);
				Attack();
			}
		}
		else
		{
			if(IsAttacking && CanMove)
			{
				Follow(UGameplayStatics::GetPlayerCharacter(GetWorld(), 0));
				IsAttacking = false;
			}
		}
	}
}

void AEnemy::CheckDistanceToPlayer()
{
	if(FVector::Distance(GetActorLocation(), PlayerCharacter->GetActorLocation()) >= MaxDistanceToPlayer && PlayerCharacter->GetActorLocation().X > GetActorLocation().X)
	{
		OnDestroyEnemy();
	}
}

void AEnemy::EnemyHit(float amount)
{
	if(!StatsComponent->IsAlive)
	{
		return;
	}

	StatsComponent->TakeDamages(amount);
}

void AEnemy::EnemyDeath()
{
	ARunCharacter* runCharacter = Cast<ARunCharacter>(PlayerCharacter);
	if(runCharacter != nullptr)
	{
		runCharacter->AddKilledEnemies(1);
		runCharacter->AddScore(ScorePointsAdded);
	}

	Wait();
	
	GetWorldTimerManager().SetTimer(DeathTimerHandle, this, &AEnemy::EnemyDeath, DeathDelay, false);
}

// Called to bind functionality to input
void AEnemy::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void AEnemy::OnDestroyEnemy()
{
	// if(GEngine)
	// {
	// 	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Enemy Destroy"));
	// }
	
	TArray<AActor*> attachedActors;
	GetAttachedActors(attachedActors);
	for (auto actor : attachedActors)
	{
		actor->Destroy();
	}
	
	Destroy();
}

