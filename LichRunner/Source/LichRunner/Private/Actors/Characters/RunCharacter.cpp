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

	StatsComponent = CreateDefaultSubobject<UStatsComponent>("GenericStatsComponent");
	PlayerStatsComponent = CreateDefaultSubobject<UPlayerStatsComponent>("PlayerUniqueStatsComponent");
	
	
	DeathDelay = 1.5f;
}

// Called when the game starts or when spawned
void ARunCharacter::BeginPlay()
{
	Super::BeginPlay();


	
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

void ARunCharacter::CharacterDeath()
{
	if(!StatsComponent->IsAlive)
	{
		return;
	}
	
	StatsComponent->IsAlive = false;

	DispatcherOnPlayerDeath.Broadcast();
	
	APlayerController* playerController = GetWorld()->GetFirstPlayerController();
	playerController->DisableInput(playerController);

	GetWorldTimerManager().SetTimer(DeathTimerHandle, this, &ARunCharacter::DisableVisual, DeathDelay, false);
}

void ARunCharacter::AddCoins(int count, ETypePickup typePickup)
{
	if(typePickup == ETypePickup::E_YellowCoin)
	{
		YellowCoinsStored += count;
	}
	else if(typePickup == ETypePickup::E_BlueCoin)
	{
		BlueCoinsStored += count;
	}
}

