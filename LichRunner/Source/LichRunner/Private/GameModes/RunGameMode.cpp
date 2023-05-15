// Fill out your copyright notice in the Description page of Project Settings.


#include "GameModes/RunGameMode.h"

#include "Actors/Obstacles/Tile.h"

ARunGameMode::ARunGameMode()
{
	InitTilesToSpawnCount = 10;
	
	CurrentSpawnTransform.SetLocation(FVector(0.0f, 0.0f, -100.0f));
	CurrentSpawnTransform.SetRotation(FRotator(0.0f, 0.0f, 0.0f).Quaternion());
	CurrentSpawnTransform.SetScale3D(FVector(1.0f));
}



void ARunGameMode::BeginPlay()
{
	Super::BeginPlay();

	for (int i = 0; i < InitTilesToSpawnCount; ++i)
	{
		CreateTile();
	}
}

void ARunGameMode::CreateTile()
{
	if(!TileClass) return;

	// Spawn the tile
	FActorSpawnParameters spawnParams;
	spawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
	spawnParams.bNoFail = true;

	ATile* tileSpawned = GetWorld()->SpawnActor<ATile>(TileClass, CurrentSpawnTransform, spawnParams);
	CurrentSpawnTransform = tileSpawned->GetAttachTransform();
	tileSpawned->OnExited.AddDynamic(this, &ARunGameMode::OnTileExited);
}

void ARunGameMode::OnTileExited(ATile* tile)
{
	CreateTile();
	tile->TileExited();
}

