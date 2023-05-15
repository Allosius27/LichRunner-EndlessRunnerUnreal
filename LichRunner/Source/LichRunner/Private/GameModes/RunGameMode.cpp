// Fill out your copyright notice in the Description page of Project Settings.


#include "GameModes/RunGameMode.h"

#include "Actors/Obstacles/Tile.h"

ARunGameMode::ARunGameMode()
{
	InitTilesToSpawnCount = 10;
	
	CurrentSpawnTransform.SetLocation(FVector(0.0f, 0.0f, -100.0f));
	CurrentSpawnTransform.SetRotation(FRotator(0.0f, 0.0f, 0.0f).Quaternion());
	CurrentSpawnTransform.SetScale3D(FVector(1.0f));

	HasObstaclesCreation = true;
	HasPickupsCreation = true;
}



void ARunGameMode::BeginPlay()
{
	Super::BeginPlay();

	for (int i = 0; i < InitTilesToSpawnCount; ++i)
	{
		CreateTile(false, true);
	}
}

void ARunGameMode::CreateTile(bool tileCanCreateObstacles, bool tileCanCreatePickups)
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
	tileSpawned->Init(createObstacles, createPickups);
	
	tileSpawned->OnExited.AddDynamic(this, &ARunGameMode::OnTileExited);
}

void ARunGameMode::OnTileExited(ATile* tile)
{
	CreateTile(true, true);
	tile->TileExited();
}

