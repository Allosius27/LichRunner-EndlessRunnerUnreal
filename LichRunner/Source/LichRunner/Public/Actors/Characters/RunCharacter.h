// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Actors/Pickups/Pickup.h"
#include "GameFramework/Character.h"
#include "RunCharacter.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FPlayerDeathSignature);

UCLASS()
class LICHRUNNER_API ARunCharacter : public ACharacter
{
	GENERATED_BODY()

#pragma  region PUBLIC
	
public:
	// Sets default values for this character's properties
	ARunCharacter();

	#pragma region UPROPERTIES

		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inspector | Camera")
		class UCameraComponent* Camera;

		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category= "Inspector | Camera")
		class USpringArmComponent* SpringArm;

		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category= "Inspector | ActorComponents")
		class UStatsComponent* StatsComponent;

		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category= "Inspector | ActorComponents")
		class UPlayerStatsComponent* PlayerStatsComponent;
	
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inspector | Stats")
		float DeathDelay;
	

		UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Public | Stats")
		int YellowCoinsStored;
			
		UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Public | Stats")
		int BlueCoinsStored;

		UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Public | Stats")
		int EnemiesKilledCount;

		UPROPERTY(BlueprintAssignable)
		FPlayerDeathSignature DispatcherOnPlayerDeath;

	#pragma endregion

	#pragma region UFUNCTIONS
	
		UFUNCTION(BlueprintCallable, Category = "Stats")
		void CharacterDeath();

		UFUNCTION(BlueprintCallable, Category = "Stats")
		void AddCoins(int count, ETypePickup typePickup);

	#pragma  endregion

	#pragma  region METHODS
		
		// Called every frame
		virtual void Tick(float DeltaTime) override;

		// Called to bind functionality to input
		virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	#pragma endregion 

#pragma  endregion 

#pragma region PROTECTED
	
protected:

	#pragma region UPROPERTIES
	
		FTimerHandle DeathTimerHandle;

	#pragma endregion 

	#pragma region UFUNCTIONS
	
		UFUNCTION(BlueprintImplementableEvent, Category = "Stats")
		void DisableVisual();

	#pragma endregion 

	#pragma  region METHODS
		
		// Called when the game starts or when spawned
		virtual void BeginPlay() override;

	#pragma endregion 

#pragma  endregion 

};
