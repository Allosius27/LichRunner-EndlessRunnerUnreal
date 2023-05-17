// Fill out your copyright notice in the Description page of Project Settings.


#include "Actors/Characters/StatsComponent.h"

// Sets default values for this component's properties
UStatsComponent::UStatsComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	MaxHealthPoints = 100.0f;
	HealthPoints = MaxHealthPoints;

	IsAlive = true;
}


// Called when the game starts
void UStatsComponent::BeginPlay()
{
	Super::BeginPlay();

	HealthPoints = MaxHealthPoints;
	
}


void UStatsComponent::TakeDamages(float amount)
{

	HealthPoints -= amount;
	if(HealthPoints <= 0)
	{
		HealthPoints = 0;
		Die(true);
	}
	
	DispatcherOnDamage.Broadcast();
}

void UStatsComponent::Heal(float amount)
{
	HealthPoints += amount;
	if(HealthPoints >= MaxHealthPoints)
	{
		HealthPoints = MaxHealthPoints;
	}
}

void UStatsComponent::Die(bool value)
{
	IsAlive = !value;

	if(!IsAlive)
	{
		DispatcherOnDeath.Broadcast();
	}
}

// Called every frame
void UStatsComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

