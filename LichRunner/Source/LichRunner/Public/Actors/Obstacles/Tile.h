// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Tile.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPlayerExitTriggerSignature, class ATile*, Tile);

UCLASS()
class LICHRUNNER_API ATile : public AActor
{
	GENERATED_BODY()

#pragma region PUBLIC
	
public:	
	// Sets default values for this actor's properties
	ATile();

	#pragma region UPROPERTIES
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Components")
		class USceneComponent* SceneRoot;

		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Components")
		class UArrowComponent* AttachPoint;

		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Components")
		class UBoxComponent* ExitTrigger;

		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Components")
		class UBoxComponent* SpawnObstaclesTrigger;


		UPROPERTY(EditAnywhere, Category = "Public | Spawnables")
		TArray<class TSubclassOf<class AObstacle>> ObstaclesClass;
	
	
		UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Public |Stats")
		bool CanCreateObstacles;

		UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Public |Stats")
		bool CanCreatePickups;

		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Public |Stats")
		float ObstacleSpawnRandomWeight;

		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Public |Stats")
		float PickupSpawnRandomWeight;

		
		UPROPERTY(BlueprintAssignable)
		FPlayerExitTriggerSignature OnExited;

	#pragma endregion

	#pragma region METHODS

		// Called every frame
		virtual void Tick(float DeltaTime) override;

	#pragma endregion

	#pragma region UFUNCTIONS
		
		UFUNCTION(BlueprintCallable, Category = "World")
		FTransform GetAttachTransform();


		UFUNCTION(Category = "Init")
		void Init(bool createObstacles, bool createPickups);
	
		UFUNCTION(Category = "World")
		void SpawnObstacle(float randomWeight);
	
		UFUNCTION(Category = "World")
		void TileExited();

	
		UFUNCTION(Category = "Utils")
		bool RandomWeight(float weight, float rangeMin, float rangeMax) const;

	#pragma endregion

#pragma endregion 

#pragma region PROTECTED
	
protected:

	#pragma region UPROPERTIES

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Protected | Stats")
	float TileEndLifeTime;
	
	FTimerHandle EndLifeTileTimerHandle;

	#pragma endregion 

	#pragma region METHODS
		
		// Called when the game starts or when spawned
		virtual void BeginPlay() override;

	#pragma endregion

	#pragma region UFUNCTIONS
	
		UFUNCTION(Category = "Collisions")
		void OnOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

		UFUNCTION(Category = "Stats")
		void OnDestroyTile();
		

	#pragma endregion 

#pragma endregion
	
};
