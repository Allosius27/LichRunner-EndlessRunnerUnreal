// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Enemy.generated.h"

UCLASS()
class LICHRUNNER_API AEnemy : public ACharacter
{
	GENERATED_BODY()

#pragma region PUBLIC
	
public:
	// Sets default values for this character's properties
	AEnemy();

	#pragma region UPROPERTIES

		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category= "Inspector | ActorComponents")
		class UStatsComponent* StatsComponent;

		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category= "Inspector | Stats")
		float DistanceAcceptanceToAttack;

	#pragma endregion

	#pragma region UFUNCTIONS

		UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
		void Follow(AActor* followTarget);

		UFUNCTION(BlueprintCallable,BlueprintImplementableEvent)
		void Wait();

		UFUNCTION(BlueprintCallable,BlueprintImplementableEvent)
		void Attack();

	#pragma endregion 

	#pragma region METHODS

		// Called every frame
		virtual void Tick(float DeltaTime) override;

		// Called to bind functionality to input
		virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	#pragma endregion 

#pragma endregion 

#pragma region PROTECTED
	
protected:

	#pragma region UPROPERTIES

		UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Protected | Stats")
		bool IsAttacking;

	#pragma endregion 

	#pragma region METHODS
		
		// Called when the game starts or when spawned
		virtual void BeginPlay() override;

	#pragma endregion 

#pragma endregion 

};
