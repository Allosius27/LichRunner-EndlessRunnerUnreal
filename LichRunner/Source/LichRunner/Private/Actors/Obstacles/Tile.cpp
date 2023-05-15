// Fill out your copyright notice in the Description page of Project Settings.


#include "Actors/Obstacles/Tile.h"

#include "Actors/Characters/RunCharacter.h"
#include "Actors/Obstacles/Obstacle.h"
#include "Components/ArrowComponent.h"
#include "Components/BoxComponent.h"
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

	TileEndLifeTime = 2.0f;
	
	ObstacleSpawnRandomWeight = 0.6f;
	PickupSpawnRandomWeight = 0.3f;
}

// Called when the game starts or when spawned
void ATile::BeginPlay()
{
	Super::BeginPlay();

	ExitTrigger->OnComponentBeginOverlap.AddDynamic(this, &ATile::ATile::OnOverlapBegin);
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
		if(GEngine)
		{
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Tile Overlap Begin With Player"));
		}
		OnExited.Broadcast(this);
	}
}


void ATile::Init(bool createObstacles, bool createPickups)
{
	CanCreateObstacles = createObstacles;
	CanCreatePickups = createPickups;

	SpawnObstacle(ObstacleSpawnRandomWeight);
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


void ATile::TileExited()
{
	if(GEngine)
	{
		//GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, FString::Printf(TEXT("Tile Exited To %f"), GetWorld()->TimeSeconds));
	}

	GetWorldTimerManager().SetTimer(EndLifeTileTimerHandle, this, &ATile::OnDestroyTile, TileEndLifeTime, false);
}

void ATile::OnDestroyTile()
{
	if(GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Tile Destroy"));
	}
	TArray<AActor*> attachedActors;
	GetAttachedActors(attachedActors);
	for (auto actor : attachedActors)
	{
		actor->Destroy();
	}
	
	Destroy();
}


bool ATile::RandomWeight(const float weight, const float rangeMin, const float rangeMax) const
{
	const float rnd = FMath::FRandRange(rangeMin, rangeMax);
	return rnd <= weight;
}

