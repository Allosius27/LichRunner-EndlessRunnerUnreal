// Fill out your copyright notice in the Description page of Project Settings.


#include "Controllers/RunPlayerController.h"

#include "GameModes/RunGameMode.h"
#include "Kismet/GameplayStatics.h"

ARunPlayerController::ARunPlayerController()
{
}


void ARunPlayerController::BeginPlay()
{
	Super::BeginPlay();
	RunCharacter = Cast<ARunCharacter>(UGameplayStatics::GetPlayerCharacter(GetWorld(), 0));
	ARunGameMode* gameMode = Cast<ARunGameMode>(GetWorld()->GetAuthGameMode());
	if(gameMode != nullptr)
	{
		RunCharacter->DispatcherOnPlayerDeath.AddDynamic(gameMode, &ARunGameMode::GameOver);
	}
	else
	{
		if(GEngine)
		{
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Game Mode Not Found"));
		}
	}
	
}

void ARunPlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();
	InputComponent->BindAxis("Move Right / Left", this, &ARunPlayerController::MoveRight);
}

void ARunPlayerController::MoveRight(float axisValue)
{
	RunCharacter->AddMovementInput(RunCharacter->GetActorRightVector(), axisValue);
}

void ARunPlayerController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if(RunCharacter->IsAlive)
	{
		RunCharacter->AddMovementInput(RunCharacter->GetActorForwardVector());
	}
	
}

