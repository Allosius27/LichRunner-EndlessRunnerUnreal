// Fill out your copyright notice in the Description page of Project Settings.


#include "Actors/Obstacles/Tile.h"

#include "Actors/Characters/RunCharacter.h"
#include "Components/ArrowComponent.h"
#include "Components/BoxComponent.h"

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

	TileEndLifeTime = 2.0f;
}

// Called when the game starts or when spawned
void ATile::BeginPlay()
{
	Super::BeginPlay();

	ExitTrigger->OnComponentBeginOverlap.AddDynamic(this, &ATile::ATile::OnOverlapBegin);
}

FTransform ATile::GetAttachTransform()
{
	return AttachPoint->GetComponentTransform();
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
	
	Destroy();
}

// Called every frame
void ATile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

