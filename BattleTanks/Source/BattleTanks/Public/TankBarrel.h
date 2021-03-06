// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Components/StaticMeshComponent.h"
#include "TankBarrel.generated.h"

UCLASS(meta = (BlueprintSpawnableComponent))
class BATTLETANKS_API UTankBarrel : public UStaticMeshComponent
{
	GENERATED_BODY()
	
public:
	// -1 Max downwar speed, +1 is max upward speed
	void Elevate(float RelativeSpeed);

private:
	UPROPERTY(EditDefaultsOnly)
		float MaxDegreesPerSecond = 5.f;
	
	UPROPERTY(EditDefaultsOnly)
		float MaxElevationDegrees = 30.f;

	UPROPERTY(EditDefaultsOnly)
		float MinElevationDegrees = 0.f;
};
