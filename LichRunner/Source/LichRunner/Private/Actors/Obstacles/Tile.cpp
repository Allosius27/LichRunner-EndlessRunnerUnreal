// Fill out your copyright notice in the Description page of Project Settings.


#include "Actors/Obstacles/Tile.h"

#include "Actors/Characters/Enemy.h"
#include "Actors/Characters/RunCharacter.h"
#include "Actors/Obstacles/Obstacle.h"
#include "Actors/Pickups/Pickup.h"
#include "Components/ArrowComponent.h"
#include "Components/BoxComponent.h"
#include "GameModes/RunGameMode.h"
#include "Kismet/KismetMathLibrary.h"

// Sets default values
ATile::ATile()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SceneRoot = CreateDefaultSubobject<USceneComponent>("SceneRoot");
	SetRootComponent(SceneRoot);

	AttachPoint = CreateDefaultSubobject<UArrowComponent>("AttachPoint");
	AttachPoint->SetupAttachment(SceneRoot);
	AttachPoint->SetRelativeLocation(FVector(1000.0f, 0.0f, 0.0f));

	ExitTrigger = CreateDefaultSubobject<UBoxComponent>("ExitTrigger");
	ExitTrigger->SetupAttachment(SceneRoot);
	ExitTrigger->SetRelativeLocation(FVector(1050.0f, 0.0f, 190.0f));
	ExitTrigger->SetBoxExtent(FVector(32.0f, 500.0f, 200.0f));

	SpawnObstaclesTrigger = CreateDefaultSubobject<UBoxComponent>("SpawnObstaclesTrigger");
	SpawnObstaclesTrigger->SetupAttachment(SceneRoot);
	SpawnObstaclesTrigger->SetRelativeLocation(FVector(800.0f, 0.0f, 0.0f));
	SpawnObstaclesTrigger->SetBoxExtent(FVector(100.0f, 400.0f, 10.0f));

	SpawnPickupsTrigger = CreateDefaultSubobject<UBoxComponent>("SpawnPickupsTrigger");
	SpawnPickupsTrigger->SetupAttachment(SceneRoot);
	SpawnPickupsTrigger->SetRelativeLocation(FVector(520.0f, 0.0f, 0.0f));
	SpawnPickupsTrigger->SetBoxExtent(FVector(400.0f, 400.0f, 10.0f));

	SpawnEnemiesTrigger = CreateDefaultSubobject<UBoxComponent>("SpawnEnemiesTrigger");
	SpawnEnemiesTrigger->SetupAttachment(SceneRoot);
	SpawnEnemiesTrigger->SetRelativeLocation(FVector(500.0f, 0.0f, 0.0f));
	SpawnEnemiesTrigger->SetBoxExtent(FVector(100.0f, 400.0f, 10.0f));
	

	TileEndLifeTime = 2.0f;
	
	ObstacleSpawnRandomWeight = 0.6f;
	PickupSpawnRandomWeight = 0.3f;
	PickupsToSpawnCount = 4;
	EnemySpawnRandomWeight = 0.8f;
	EnemiesToSpawnCount = 5;
}

// Called when the game starts or when spawned
void ATile::BeginPlay()
{
	Super::BeginPlay();

	ExitTrigger->OnComponentBeginOverlap.AddDynamic(this, &ATile::ATile::OnOverlapBegin);
}

void ATile::Init(bool createObstacles, bool createPickups, bool createEnemies)
{
	CanCreateObstacles = createObstacles;
	CanCreatePickups = createPickups;
	CanCreateEnemies = createEnemies;

	SpawnObstacle(ObstacleSpawnRandomWeight);
	
	for (int i = 0; i < PickupsToSpawnCount; ++i)
	{
		SpawnPickup(PickupSpawnRandomWeight);
	}

	for (int i = 0; i < EnemiesToSpawnCount; ++i)
	{
		SpawnEnemy(EnemySpawnRandomWeight);
	}
	
}

// Called every frame
void ATile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ATile::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp,
						   int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if(ARunCharacter* player = Cast<ARunCharacter>(OtherActor))
	{
		// if(GEngine)
		// {
		// 	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Tile Overlap Begin With Player"));
		// }
		OnExited.Broadcast(this);
	}
}



FTransform ATile::GetAttachTransform()
{
	return AttachPoint->GetComponentTransform();
}


void ATile::SpawnObstacle(float randomWeight)
{
	if(RandomWeight(randomWeight, 0, 1) && CanCreateObstacles)
	{
		FVector pointPos = UKismetMathLibrary::RandomPointInBoundingBox(SpawnObstaclesTrigger->GetComponentLocation(), SpawnObstaclesTrigger->GetScaledBoxExtent());
		int rnd = FMath::RandRange(0, ObstaclesClass.Num()-1);
		
		FActorSpawnParameters spawnParams;
		spawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
		spawnParams.bNoFail = true;
		
		FTransform transform;
		transform.SetLocation(pointPos);
		transform.SetRotation(GetActorRotation().Quaternion());
		transform.SetScale3D(FVector(1.0f));
		
		AObstacle* obstacle = GetWorld()->SpawnActor<AObstacle>(ObstaclesClass[rnd], transform, spawnParams);
		obstacle->AttachToActor(this, FAttachmentTransformRules::KeepWorldTransform);
	}
}

void ATile::SpawnPickup(float randomWeight)
{
	if(RandomWeight(randomWeight, 0, 1) && CanCreatePickups)
	{
		FVector pointPos = UKismetMathLibrary::RandomPointInBoundingBox(SpawnPickupsTrigger->GetComponentLocation(), SpawnPickupsTrigger->GetScaledBoxExtent());
		int rnd = FMath::RandRange(0, PickupsClass.Num()-1);
		
		FActorSpawnParameters spawnParams;
		spawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
		spawnParams.bNoFail = true;
		
		FTransform transform;
		transform.SetLocation(pointPos);
		transform.SetRotation(GetActorRotation().Quaternion());
		transform.SetScale3D(FVector(1.0f));
		
		APickup* pickup = GetWorld()->SpawnActor<APickup>(PickupsClass[rnd], transform, spawnParams);
		pickup->AttachToActor(this, FAttachmentTransformRules::KeepWorldTransform);
	}
}

void ATile::SpawnEnemy(float randomWeight)
{
	if(RandomWeight(randomWeight, 0, 1) && CanCreateEnemies)
	{
		FVector pointPos = UKismetMathLibrary::RandomPointInBoundingBox(SpawnEnemiesTrigger->GetComponentLocation(), SpawnEnemiesTrigger->GetScaledBoxExtent());
		int rnd = FMath::RandRange(0, EnemiesClass.Num()-1);
		
		FActorSpawnParameters spawnParams;
		spawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
		spawnParams.bNoFail = true;
		
		FTransform transform;
		transform.SetLocation(pointPos);
		transform.SetRotation(GetActorRotation().Quaternion());
		transform.SetScale3D(FVector(1.0f));
		
		AEnemy* enemy = GetWorld()->SpawnActor<AEnemy>(EnemiesClass[rnd], transform, spawnParams);
		//enemy->AttachToActor(this, FAttachmentTransformRules::KeepWorldTransform);
	}
}


void ATile::TileExited()
{
	//if(GEngine)
	//{
		//GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, FString::Printf(TEXT("Tile Exited To %f"), GetWorld()->TimeSeconds));
	//}

	GetWorldTimerManager().SetTimer(EndLifeTileTimerHandle, this, &ATile::OnDestroyTile, TileEndLifeTime, false);
}

void ATile::OnDestroyTile()
{
	ARunGameMode* gameMode = Cast<ARunGameMode>(GetWorld()->GetAuthGameMode());
	if(gameMode != nullptr && gameMode->GameEnded)
	{
		return;
	}
	
	// if(GEngine)
	// {
	// 	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Tile Destroy"));
	// }
	
	TArray<AActor*> attachedActors;
	GetAttachedActors(attachedActors);
	for (auto actor : attachedActors)
	{
		if(actor != nullptr)
		{
			actor->Destroy();
		}
	}
		
	
	Destroy();
}


bool ATile::RandomWeight(const float weight, const float rangeMin, const float rangeMax) const
{
	const float rnd = FMath::FRandRange(rangeMin, rangeMax);
	return rnd <= weight;
}

