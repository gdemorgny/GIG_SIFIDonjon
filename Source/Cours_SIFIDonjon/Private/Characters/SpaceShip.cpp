// Fill out your copyright notice in the Description page of Project Settings.


#include "Characters/SpaceShip.h"

// Sets default values
ASpaceShip::ASpaceShip()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	MovementComponent = CreateDefaultSubobject<USpaceShipMovementComponent>(FName("MovementComponent"));
	
}

// Called when the game starts or when spawned
void ASpaceShip::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASpaceShip::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ASpaceShip::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void ASpaceShip::Move(const FVector& Direction, float ActionValue, float DeltaTime)
{
	MovementComponent->LinearLocomotion(Direction, ActionValue, DeltaTime);
}

void ASpaceShip::Turn(const FVector2d ActionValue)
{
	MovementComponent->AngleLocomotion(ActionValue.X, ActionValue.Y);
}

