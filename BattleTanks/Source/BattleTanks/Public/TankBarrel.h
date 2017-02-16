// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Components/StaticMeshComponent.h"
#include "TankBarrel.generated.h"

/**
 * 
 */
UCLASS(meta = (BlueprintSpawnableComponent),hidecategories=("Collision"))
class BATTLETANKS_API UTankBarrel : public UStaticMeshComponent
{
	GENERATED_BODY()
	
public:
	void Elevate(float DegreesPerSecond);

private:
	UPROPERTY(EditAnywhere)
		float MaxDegreesPerSecond = 20.f; // TODO Find sensible default
	
	UPROPERTY(EditAnywhere)
		float MaxElevationDegrees = 30.f; // TODO Find sensible default

	UPROPERTY(EditAnywhere)
		float MinElevationDegrees = 0.f; // TODO Find sensible default
};
