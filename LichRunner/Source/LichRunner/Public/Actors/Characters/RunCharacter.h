// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "RunCharacter.generated.h"

UCLASS()
class LICHRUNNER_API ARunCharacter : public ACharacter
{
	GENERATED_BODY()

#pragma  region PUBLIC
	
public:
	// Sets default values for this character's properties
	ARunCharacter();

#pragma region UPROPERTIES

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Camera")
	class UCameraComponent* Camera;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category= "Camera")
	class USpringArmComponent* SpringArm;

#pragma endregion 

#pragma  region METHODS
	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

#pragma endregion 

#pragma  endregion 

#pragma region PROTECTED
	
protected:

#pragma  region METHODS
	
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

#pragma endregion 

#pragma  endregion 

};
