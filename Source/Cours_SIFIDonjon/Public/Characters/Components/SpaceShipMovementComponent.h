// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SpaceShipMovementComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class COURS_SIFIDONJON_API USpaceShipMovementComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	USpaceShipMovementComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	

	UFUNCTION(BlueprintCallable)
	void LinearLocomotion(const FVector& Direction,float ActionValue,float DeltaTime);
	UFUNCTION(BlueprintCallable)
	void AngleLocomotion(const float PitchValue,const float YawValue);

private:
	UPROPERTY(EditAnywhere)
	float LinearSpeed = 1000.0f;
};
