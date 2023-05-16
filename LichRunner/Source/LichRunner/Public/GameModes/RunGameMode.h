// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "RunGameMode.generated.h"

/**
 * 
 */
UCLASS()
class LICHRUNNER_API ARunGameMode : public AGameModeBase
{
	GENERATED_BODY()

#pragma region PUBLIC

public:
	ARunGameMode();

	#pragma region UPROPERTIES

		UPROPERTY(EditAnywhere, Category = "Inspector | Game World")
		int32 InitTilesToSpawnCount;

		UPROPERTY(EditAnywhere, Category = "Inspector | Game World")
		bool HasObstaclesCreation;

		UPROPERTY(EditAnywhere, Category = "Inspector | Game World")
		bool HasPickupsCreation;

		UPROPERTY(EditAnywhere, Category = "Inspector | Game World")
		bool HasEnemiesCreation;

		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inspector | Global Management")
		float RestartLevelDelay;

	#pragma endregion 

	#pragma region UFUNCTIONS

		UFUNCTION(BlueprintCallable, Category = "Game World")
		void CreateTile(bool tileCanCreateObstacles, bool tileCanCreatePickups, bool tileCanCreateEnemies);

		UFUNCTION(BlueprintCallable, Category = "Global Management")
		void GameOver();

	#pragma endregion 

#pragma  endregion


#pragma region PROTECTED

	#pragma region UPROPERTIES

		UPROPERTY(EditAnywhere, Category = "Protected | Game World")
		class TSubclassOf<class ATile>TileClass;

		UPROPERTY(EditAnywhere, Category = "Protected | Game World")
		FTransform CurrentSpawnTransform;

		FTimerHandle RestartLevelTimerHandle;

	#pragma endregion

	#pragma region UFUNCTIONS

		UFUNCTION(Category = "Game World")
		void OnTileExited(ATile* tile);

		UFUNCTION(Category = "Global Management")
		void RestartLevel();

	#pragma endregion 

	#pragma region METHODS
			
		// Called when the game starts or when spawned
		virtual void BeginPlay() override;

	#pragma endregion

#pragma endregion 
};
