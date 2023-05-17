// Fill out your copyright notice in the Description page of Project Settings.


#include "Actors/Characters/PlayerStatsComponent.h"

// Sets default values for this component's properties
UPlayerStatsComponent::UPlayerStatsComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	MaxManaPoints = 100.0f;
	ManaPoints = MaxManaPoints;

	MaxArchenPoints = 10.0f;
	ArchenPoints = MaxArchenPoints;
}


// Called when the game starts
void UPlayerStatsComponent::BeginPlay()
{
	Super::BeginPlay();

	ManaPoints = MaxManaPoints;
	ArchenPoints = MaxArchenPoints;
}

// Called every frame
void UPlayerStatsComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}


void UPlayerStatsComponent::AddMana(float amount)
{
	ManaPoints += amount;
	if(ManaPoints >= MaxManaPoints)
	{
		ManaPoints = MaxManaPoints;
	}
}

void UPlayerStatsComponent::RemoveMana(float amount)
{
	ManaPoints -= amount;
	if(ManaPoints <= 0)
	{
		ManaPoints = 0;
	}
}

void UPlayerStatsComponent::AddArchen(float amount)
{
	ArchenPoints += amount;
	if(ArchenPoints >= MaxArchenPoints)
	{
		ArchenPoints = MaxArchenPoints;
	}
}

void UPlayerStatsComponent::RemoveArchen(float amount)
{
	ArchenPoints -= amount;
	if(ArchenPoints <= 0)
	{
		ArchenPoints = 0;
	}
}



