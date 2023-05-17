// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Pickup.generated.h"

UENUM(BlueprintType)
enum class ETypePickup : uint8 {
	E_ManaCoin = 0 UMETA(DisplayName = "ManaCoin"),
	E_ArchenCoin = 1  UMETA(DisplayName = "ArchenCoin"),
	E_HealthCoin = 2  UMETA(DisplayName = "HealthCoin"),
};

UCLASS()
class LICHRUNNER_API APickup : public AActor
{
	GENERATED_BODY()

#pragma region PUBLIC
	
public:	
	// Sets default values for this actor's properties
	APickup();

	#pragma region UPROPERTIES

		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inspector | Stats")
		ETypePickup TypePickup;

		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inspector | Stats")
		int PickupCoinsCount;

		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inspector | Stats")
		int ScorePointsAdded;

		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inspector | Stats")
		float EffectValue;

	#pragma endregion 

	#pragma region METHODS

		// Called every frame
		virtual void Tick(float DeltaTime) override;

	#pragma endregion 

#pragma endregion

#pragma region PROTECTED
	
protected:

	#pragma region UPROPERTIES
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Components")
		class USceneComponent* SceneRoot;
	
		UPROPERTY(VisibleAnywhere, Category = "Components")
		class UStaticMeshComponent* StaticMesh;

		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Components")
		class USphereComponent* PickupTrigger;

	#pragma endregion

	#pragma region UFUNCTIONS

		UFUNCTION(Category = "Collisions")
		void OnOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
	
		UFUNCTION(BlueprintImplementableEvent)
		void OnGet(ARunCharacter* runCharacter);

	#pragma endregion 

	#pragma region METHODS
		
		// Called when the game starts or when spawned
		virtual void BeginPlay() override;

	#pragma endregion 

#pragma endregion 
	
};
