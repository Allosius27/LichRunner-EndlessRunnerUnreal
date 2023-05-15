// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Obstacle.generated.h"

UCLASS()
class LICHRUNNER_API AObstacle : public AActor
{
	GENERATED_BODY()

#pragma region PUBLIC

public:	
	// Sets default values for this actor's properties
	AObstacle();

	#pragma region METHODS
		
		// Called every frame
		virtual void Tick(float DeltaTime) override;

	#pragma endregion

#pragma endregion

#pragma region PROTECTED
	
protected:

	#pragma region UPROPERTIES

		UPROPERTY(VisibleAnywhere, Category = "Components")
		class UStaticMeshComponent* StaticMesh;
	
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Components")
		class USceneComponent* SceneRoot;

	#pragma endregion

	#pragma region UFUNCTIONS

	UFUNCTION(BlueprintImplementableEvent)
	void OnHit();

	#pragma endregion 

	#pragma region METHODS
		
		// Called when the game starts or when spawned
		virtual void BeginPlay() override;

	#pragma endregion 

#pragma endregion 

public:	


};
