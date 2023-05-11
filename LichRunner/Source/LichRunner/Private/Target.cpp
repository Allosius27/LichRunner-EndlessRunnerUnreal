// Fill out your copyright notice in the Description page of Project Settings.


#include "Target.h"
#include "Bullet.h"
#include "SampleGameMode.h"
#include "Components/StaticMeshComponent.h"

// Sets default values
ATarget::ATarget()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>("Mesh");
	SetRootComponent(StaticMesh);

	MovementRange =  200.0f;
}

// Called when the game starts or when spawned
void ATarget::BeginPlay()
{
	Super::BeginPlay();
	OnActorHit.AddDynamic(this, &ATarget::OnHit);

	moveDirection = FMath::VRand();
}

void ATarget::OnHit(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit)
{
	if(ABullet* bullet = Cast<ABullet>(OtherActor))
	{
		UE_LOG(LogTemp, Warning, TEXT("Bullet Detected"));
		if(ASampleGameMode* mode = Cast<ASampleGameMode>(GetWorld()->GetAuthGameMode()))
		{
			UE_LOG(LogTemp, Warning, TEXT("SampleGameMode Detected"));
			mode->IncreasePoints();
			Destroy();
		}
	}
}

// Called every frame
void ATarget::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	//Use a sine wave
	FVector movement = moveDirection * MovementRange * FMath::Sin(GetWorld()->GetTimeSeconds()) * DeltaTime;

	// Move
	AddActorWorldOffset(movement, true);
}

