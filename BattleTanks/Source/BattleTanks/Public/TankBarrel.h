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
	// -1 Max downwar speed, +1 is max upward speed
	void Elevate(float RelativeSpeed);

private:
	UPROPERTY(EditAnywhere)
		float MaxDegreesPerSecond = 5.f;
	
	UPROPERTY(EditAnywhere)
		float MaxElevationDegrees = 30.f;

	UPROPERTY(EditAnywhere)
		float MinElevationDegrees = 0.f;
};
