// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Components/StaticMeshComponent.h"
#include "TankTracks.generated.h"

UCLASS(meta = (BlueprintSpawnableComponent))
class BATTLETANKS_API UTankTracks : public UStaticMeshComponent
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = Input)
	void SetThrottle(float Throttle);

	// Max Force per track in Newtons
	UPROPERTY(EditDefaultsOnly)
	float TrackMaxDriveForce = 400000; // assume 40T tank, and 1g (10m/s/s) accelleration.
};
