// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Actors/Characters/RunCharacter.h"
#include "GameFramework/PlayerController.h"
#include "RunPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class LICHRUNNER_API ARunPlayerController : public APlayerController
{
	GENERATED_BODY()

#pragma region PUBLIC
	
public:
	ARunPlayerController();

#pragma region METHODS
	
	virtual void Tick(float DeltaTime) override;

	void MoveRight(float axisValue);

#pragma endregion

#pragma endregion 

#pragma region PROTECTED
	
protected:

	UPROPERTY(VisibleAnywhere)
	ARunCharacter* RunCharacter;

#pragma region METHODS
	
	virtual void BeginPlay() override;
	virtual  void SetupInputComponent() override;

#pragma endregion 

#pragma endregion
	
};
