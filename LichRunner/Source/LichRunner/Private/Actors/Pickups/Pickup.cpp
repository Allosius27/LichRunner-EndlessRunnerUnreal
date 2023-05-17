// Fill out your copyright notice in the Description page of Project Settings.


#include "Actors/Pickups/Pickup.h"

#include "Actors/Characters/RunCharacter.h"
#include "Components/BoxComponent.h"
#include "Components/SphereComponent.h"

// Sets default values
APickup::APickup()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SceneRoot = CreateDefaultSubobject<USceneComponent>("SceneRoot");
	SetRootComponent(SceneRoot);
	
	StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>("StaticMesh");
	StaticMesh->SetupAttachment(SceneRoot);
	StaticMesh->SetCollisionProfileName(FName("NoCollision"));

	PickupTrigger = CreateDefaultSubobject<USphereComponent>("PickupTrigger");
	PickupTrigger->SetupAttachment(SceneRoot);
	PickupTrigger->SetRelativeLocation(FVector(0.0f, 0.0f, 30.0f));
	PickupTrigger->SetSphereRadius(60.0f);


	PickupCoinsCount = 1;
	ScorePointsAdded = 100;
	EffectValue = 10.0f;
}


// Called when the game starts or when spawned
void APickup::BeginPlay()
{
	Super::BeginPlay();

	PickupTrigger->OnComponentBeginOverlap.AddDynamic(this, &APickup::OnOverlapBegin);
}

// Called every frame
void APickup::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void APickup::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp,
	int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if(ARunCharacter* player = Cast<ARunCharacter>(OtherActor))
	{
		OnGet(player);

		Destroy();
	}
}
