// Fill out your copyright notice in the Description page of Project Settings.


#include "Actors/Obstacles/Obstacle.h"

#include "Components/BoxComponent.h"

// Sets default values
AObstacle::AObstacle()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SceneRoot = CreateDefaultSubobject<USceneComponent>("SceneRoot");
	SetRootComponent(SceneRoot);
	
	StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>("StaticMesh");
	StaticMesh->SetupAttachment(SceneRoot);
	StaticMesh->SetCollisionProfileName(FName("BlockAllDynamic"));

	IsMortal = true;
}


// Called when the game starts or when spawned
void AObstacle::BeginPlay()
{
	Super::BeginPlay();

	OnActorHit.AddDynamic(this, &AObstacle::OnHit);
}

// Called every frame
void AObstacle::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AObstacle::OnHit(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit)
{
	if(ARunCharacter* player = Cast<ARunCharacter>(OtherActor))
	{
		//UE_LOG(LogTemp, Warning, TEXT("Player Detected"));
		if(IsMortal)
		{
			HitPlayer(player);
		}
		
	}
}

