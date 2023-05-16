// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PlayerStatsComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class LICHRUNNER_API UPlayerStatsComponent : public UActorComponent
{
	GENERATED_BODY()

#pragma region PUBLIC
	
public:	
	// Sets default values for this component's properties
	UPlayerStatsComponent();

#pragma region UPROPERTIES

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inspector | Stats")
	float MaxManaPoints;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inspector | Stats")
	float MaxArchenPoints;

	
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Public | Stats")
	float ManaPoints;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Public | Stats")
	float ArchenPoints;

#pragma endregion 

#pragma region METHODS
		
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

#pragma endregion 

#pragma endregion 

#pragma region PROTECTED
	
protected:

#pragma region METHODS
		
	// Called when the game starts
	virtual void BeginPlay() override;

#pragma endregion 

#pragma endregion
		
};
