// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Target.generated.h"

UCLASS()
class LICHRUNNER_API ATarget : public AActor
{
	GENERATED_BODY()

#pragma  region Public
public:	
	// Sets default values for this actor's properties
	ATarget();

#pragma region Methods
	// Called every frame
	virtual void Tick(float DeltaTime) override;
#pragma endregion 

#pragma  endregion

#pragma  region Protected
protected:

#pragma  region UProperties
	UPROPERTY(VisibleAnywhere)
	class UStaticMeshComponent* StaticMesh;

	UPROPERTY(EditAnywhere)
	float MovementRange;
#pragma endregion 

#pragma region Methods
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
#pragma endregion 

#pragma region UFunctions
	UFUNCTION()
	void OnHit(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit);
#pragma endregion 

#pragma endregion 

#pragma region Private
private:
	FVector moveDirection;
#pragma endregion 
};
