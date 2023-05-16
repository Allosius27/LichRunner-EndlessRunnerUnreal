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

	#pragma region UPROPERTIES
	
		UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Public | Characters")
		ARunCharacter* RunCharacter;

	#pragma endregion 

	#pragma region METHODS
		
		virtual void Tick(float DeltaTime) override;

	#pragma endregion

	#pragma region UFUNCTIONS
		
		UFUNCTION(Category = "PlayerMovements")
		void MoveRight(float axisValue);

		UFUNCTION(Category = "PlayerMovements")
		void Jump();
		UFUNCTION(Category = "PlayerMovements")
		void EndJump();

	#pragma endregion 

#pragma endregion 

#pragma region PROTECTED
	
protected:

	#pragma region METHODS
		
		virtual void BeginPlay() override;
		virtual  void SetupInputComponent() override;

	#pragma endregion 

#pragma endregion
	
};
