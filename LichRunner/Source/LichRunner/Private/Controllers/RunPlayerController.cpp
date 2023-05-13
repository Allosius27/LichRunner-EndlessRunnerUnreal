// Fill out your copyright notice in the Description page of Project Settings.


#include "Controllers/RunPlayerController.h"

#include "Kismet/GameplayStatics.h"

ARunPlayerController::ARunPlayerController()
{
}


void ARunPlayerController::BeginPlay()
{
	Super::BeginPlay();
	RunCharacter = Cast<ARunCharacter>(UGameplayStatics::GetPlayerCharacter(GetWorld(), 0));
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
	RunCharacter->AddMovementInput(RunCharacter->GetActorForwardVector());
}

