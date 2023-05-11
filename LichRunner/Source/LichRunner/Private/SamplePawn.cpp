// Fill out your copyright notice in the Description page of Project Settings.


#include "SamplePawn.h"

#include "Bullet.h"

#include "Components/StaticMeshComponent.h"
#include "GameFramework/FloatingPawnMovement.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"


// Sets default values
ASamplePawn::ASamplePawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>("StaticMesh");
	SetRootComponent(StaticMesh);

	Movement = CreateDefaultSubobject<UFloatingPawnMovement>("Movement");

	SpringArm = CreateDefaultSubobject<USpringArmComponent>("SpringArm");
	SpringArm->SetupAttachment(StaticMesh);
	SpringArm->TargetArmLength = 500.0f;
	
	Camera = CreateDefaultSubobject<UCameraComponent>("Camera");
	Camera->SetupAttachment(SpringArm);

	bUseControllerRotationYaw = true;
	bUseControllerRotationPitch = true;
}

// Called when the game starts or when spawned
void ASamplePawn::BeginPlay()
{
	Super::BeginPlay();
	
}

void ASamplePawn::MoveForward(float scale)
{
	Movement->AddInputVector(GetActorForwardVector() * scale);
}

void ASamplePawn::MoveRight(float scale)
{
	Movement->AddInputVector(GetActorRightVector() * scale);
}

void ASamplePawn::Turn(float scale)
{
	AddControllerYawInput(scale);
}

void ASamplePawn::LookUp(float scale)
{
	AddControllerPitchInput(scale);
}

void ASamplePawn::Shoot()
{
	if(!BulletClass) return;

	// Spawn the bullet
	FActorSpawnParameters spawnParams;
	spawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
	spawnParams.bNoFail = true;
	spawnParams.Owner = this;
	spawnParams.Instigator = this;

	FTransform transform;
	transform.SetLocation(GetActorForwardVector() * BulletSpawnOffset + GetActorLocation());
	transform.SetRotation(GetActorRotation().Quaternion());
	transform.SetScale3D(FVector(1.0f));

	GetWorld()->SpawnActor<ABullet>(BulletClass, transform, spawnParams);
}

// Called every frame
void ASamplePawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ASamplePawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis("Move Forward / Backward", this, &ASamplePawn::MoveForward);
	PlayerInputComponent->BindAxis("Move Right / Left", this, &ASamplePawn::MoveRight);
	PlayerInputComponent->BindAxis("Turn Right / Left Mouse", this, &ASamplePawn::Turn);
	PlayerInputComponent->BindAxis("Look Up / Down Mouse", this, &ASamplePawn::LookUp);

	PlayerInputComponent->BindAction("Shoot", IE_Pressed, this, &ASamplePawn::Shoot);
}

