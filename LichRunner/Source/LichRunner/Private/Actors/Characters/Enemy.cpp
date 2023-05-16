// Fill out your copyright notice in the Description page of Project Settings.


#include "Actors/Characters/Enemy.h"

#include "Actors/Characters/PlayerStatsComponent.h"
#include "Actors/Characters/StatsComponent.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
AEnemy::AEnemy()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	StatsComponent = CreateDefaultSubobject<UStatsComponent>("GenericStatsComponent");

	DistanceAcceptanceToAttack = 150.0f;
}

// Called when the game starts or when spawned
void AEnemy::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEnemy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if(FVector::Distance(GetActorLocation(), UGameplayStatics::GetPlayerCharacter(GetWorld(), 0)->GetActorLocation()) <= DistanceAcceptanceToAttack)
	{
		if(!IsAttacking)
		{
			Attack();
			IsAttacking = true;
		}
	}
	else
	{
		if(IsAttacking)
		{
			Follow(UGameplayStatics::GetPlayerCharacter(GetWorld(), 0));
			IsAttacking = false;
		}
	}

}

// Called to bind functionality to input
void AEnemy::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

