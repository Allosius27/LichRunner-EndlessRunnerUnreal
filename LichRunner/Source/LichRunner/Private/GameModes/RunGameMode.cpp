// Fill out your copyright notice in the Description page of Project Settings.


#include "GameModes/RunGameMode.h"

#include "Actors/Obstacles/Tile.h"
#include "Kismet/GameplayStatics.h"

ARunGameMode::ARunGameMode()
{
	InitTilesToSpawnCount = 10;
	
	CurrentSpawnTransform.SetLocation(FVector(0.0f, 0.0f, -100.0f));
	CurrentSpawnTransform.SetRotation(FRotator(0.0f, 0.0f, 0.0f).Quaternion());
	CurrentSpawnTransform.SetScale3D(FVector(1.0f));

	HasObstaclesCreation = true;
	HasPickupsCreation = true;
	HasEnemiesCreation = true;

	GameEnded = false;
	
	RestartLevelDelay = 2.5f;
}



void ARunGameMode::BeginPlay()
{
	Super::BeginPlay();

	for (int i = 0; i < InitTilesToSpawnCount; ++i)
	{
		CreateTile(false, true, false);
	}
}

void ARunGameMode::CreateTile(bool tileCanCreateObstacles, bool tileCanCreatePickups, bool tileCanCreateEnemies)
{
	if(!TileClass) return;

	// Spawn the tile
	FActorSpawnParameters spawnParams;
	spawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
	spawnParams.bNoFail = true;

	ATile* tileSpawned = GetWorld()->SpawnActor<ATile>(TileClass, CurrentSpawnTransform, spawnParams);
	CurrentSpawnTransform = tileSpawned->GetAttachTransform();
	
	bool createObstacles = HasObstaclesCreation && tileCanCreateObstacles;
	bool createPickups = HasPickupsCreation && tileCanCreatePickups;
	bool createEnemies = HasEnemiesCreation && tileCanCreateEnemies;
	tileSpawned->Init(createObstacles, createPickups, createEnemies);
	
	tileSpawned->OnExited.AddDynamic(this, &ARunGameMode::OnTileExited);
	
}


void ARunGameMode::OnTileExited(ATile* tile)
{
	CreateTile(true, true, true);
	tile->TileExited();
}


void ARunGameMode::GameOver()
{
	GameEnded = true;
	//GetWorldTimerManager().SetTimer(RestartLevelTimerHandle, this, &ARunGameMode::RestartLevel, RestartLevelDelay, false);
	OpenGameOverScreen();
}


void ARunGameMode::RestartLevel()
{
	// if(GEngine)
	// {
	// 	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Purple, TEXT("Restart Level"));
	// }
	
	UGameplayStatics::OpenLevel(this, FName(*GetWorld()->GetName()), false);
}
