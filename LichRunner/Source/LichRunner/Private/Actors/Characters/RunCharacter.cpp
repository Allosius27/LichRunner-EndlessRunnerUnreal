// Fill out your copyright notice in the Description page of Project Settings.


#include "Actors/Characters/RunCharacter.h"

#include "Actors/Characters/PlayerStatsComponent.h"
#include "Actors/Characters/StatsComponent.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"

// Sets default values
ARunCharacter::ARunCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SpringArm = CreateDefaultSubobject<USpringArmComponent>("SpringArm");
	SpringArm->SetupAttachment(RootComponent);
	SpringArm->TargetArmLength = 550.0f;
	SpringArm->SocketOffset = FVector(0.0f, 0.0f, 150.0f);
	SpringArm->bDoCollisionTest = false;
	SpringArm->bUsePawnControlRotation = true;
	
	Camera = CreateDefaultSubobject<UCameraComponent>("Camera");
	Camera->SetupAttachment(SpringArm);
	Camera->SetRelativeLocation(FVector(4.0f, 0.0f, 47.0f));
	Camera->SetRelativeRotation(FRotator(-15.0f, 0.0f, 0.0f));

	CastFromComponent = CreateDefaultSubobject<USceneComponent>("CastFromComponent");
	CastFromComponent->SetupAttachment(GetMesh());
	CastFromComponent->SetRelativeLocation(FVector(0.0f, 120.0f, 140.0f));
	CastFromComponent->SetRelativeRotation(FRotator(0.0f, 90.0f, 0.0f));

	StatsComponent = CreateDefaultSubobject<UStatsComponent>("GenericStatsComponent");
	PlayerStatsComponent = CreateDefaultSubobject<UPlayerStatsComponent>("PlayerUniqueStatsComponent");
	
	CastProjectileManaCost = 10.0f;
	
	DeathDelay = 1.5f;
}

// Called when the game starts or when spawned
void ARunCharacter::BeginPlay()
{
	Super::BeginPlay();

	StatsComponent->DispatcherOnDeath.AddDynamic(this, &ARunCharacter::CharacterDeath);
	
}

// Called every frame
void ARunCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ARunCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void ARunCharacter::Shoot()
{
	// if(GEngine)
	// {
	// 	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Blue, FString::Printf(TEXT("Shoot")));
	// }

	if(PlayerStatsComponent->ManaPoints < CastProjectileManaCost)
	{
		return;
	}

	PlayerStatsComponent->RemoveMana(CastProjectileManaCost);
	
	int rnd = FMath::RandRange(0, ProjectilesClass.Num()-1);
		
	FActorSpawnParameters spawnParams;
	spawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
	spawnParams.bNoFail = true;
		
	FTransform transform;
	transform.SetLocation(CastFromComponent->GetComponentLocation());
	transform.SetScale3D(FVector(1.0f));
		
	AActor* projectile = GetWorld()->SpawnActor<AActor>(ProjectilesClass[rnd], transform, spawnParams);
}

void ARunCharacter::CharacterHit(float amount)
{
	if(!StatsComponent->IsAlive)
	{
		return;
	}

	StatsComponent->TakeDamages(amount);
}

void ARunCharacter::CharacterDeath()
{
	if(StatsComponent->IsAlive)
	{
		return;
	}
	
	APlayerController* playerController = GetWorld()->GetFirstPlayerController();
	playerController->DisableInput(playerController);

	GetWorldTimerManager().SetTimer(DeathTimerHandle, this, &ARunCharacter::DisableVisual, DeathDelay, false);
}

void ARunCharacter::AddCoins(int count, int scorePoints, float effectStats, ETypePickup typePickup)
{
	if(typePickup == ETypePickup::E_ManaCoin)
	{
		ManaCoinsStored += count;

		PlayerStatsComponent->AddMana(effectStats);
	}
	else if(typePickup == ETypePickup::E_ArchenCoin)
	{
		ArchenCoinsStored += count;

		PlayerStatsComponent->AddArchen(effectStats);
	}
	else if(typePickup == ETypePickup::E_HealthCoin)
	{
		HealthCoinsStored += count;

		StatsComponent->Heal(effectStats);
	}

	AddScore(scorePoints);
}

void ARunCharacter::AddKilledEnemies(int enemiesKilled)
{
	EnemiesKilledCount += enemiesKilled;
}

void ARunCharacter::AddScore(int scorePoints)
{
	Score += scorePoints;
}

