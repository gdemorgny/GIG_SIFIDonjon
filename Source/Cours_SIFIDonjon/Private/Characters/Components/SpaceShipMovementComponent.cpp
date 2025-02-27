// Fill out your copyright notice in the Description page of Project Settings.


#include "Characters/Components/SpaceShipMovementComponent.h"

// Sets default values for this component's properties
USpaceShipMovementComponent::USpaceShipMovementComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void USpaceShipMovementComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void USpaceShipMovementComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void USpaceShipMovementComponent::LinearLocomotion(const FVector& Direction, float ActionValue, float DeltaTime)
{
	AActor* Owner = GetOwner();
	if (Owner)
	{
		FVector NewLocation = Owner->GetActorLocation()+Direction*ActionValue*DeltaTime*LinearSpeed;
		Owner->SetActorLocation(NewLocation);
	}
}

void USpaceShipMovementComponent::AngleLocomotion(float PitchValue, float YawValue)
{
	AActor* Owner = GetOwner();
	if (Owner)
	{
		FRotator NewRotation = Owner->GetActorRotation();
		NewRotation.Pitch += PitchValue;
		NewRotation.Yaw += YawValue;
		Owner->SetActorRotation(NewRotation);
	}
}

