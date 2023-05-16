// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "StatsComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class LICHRUNNER_API UStatsComponent : public UActorComponent
{
	GENERATED_BODY()


#pragma region PUBLIC
	
public:	
	// Sets default values for this component's properties
	UStatsComponent();

	#pragma region UPROPERTIES

		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inspector | Stats")
		float MaxHealthPoints;
	
	
		UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Public | Stats")
		float HealthPoints;

		UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Public | Stats")
		bool IsAlive;

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

public:	


		
};
