// Fill out your copyright notice in the Description page of Project Settings.

#include "EnhancedInputComponent.h"
#include "Global/SpaceShipPlayerControler.h"

ASpaceShipPlayerControler::ASpaceShipPlayerControler()
{
	
}

void ASpaceShipPlayerControler::BeginPlay()
{
	Super::BeginPlay();
	if(ULocalPlayer* LocalPlayer= GetLocalPlayer())
	{
		if(UEnhancedInputLocalPlayerSubsystem* EnhancedInputLocalPlayerSubsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(LocalPlayer))
		{
			EnhancedInputLocalPlayerSubsystem->AddMappingContext(InputMappingContext,0);
		}
	}
	
	if(UEnhancedInputComponent* CustomEnhancedInputComponent = Cast<UEnhancedInputComponent>(InputComponent))
	{
		CustomEnhancedInputComponent->BindAction(Forward,ETriggerEvent::Triggered,this,&ASpaceShipPlayerControler::MoveForward);
	}
}

void ASpaceShipPlayerControler::MoveForward(const FInputActionValue& Value)
{
	UE_LOG(LogTemp,Warning,TEXT("ASpaceShipPlayerControler::MoveForward"));
}

// void ASpaceShipPlayerControler::MoveRight(const FInputActionValue& Value)
// {
// }
//
// void ASpaceShipPlayerControler::MoveUp(const FInputActionValue& Value)
// {
// }
//
// void ASpaceShipPlayerControler::Rotate(const FInputActionValue& Value)
// {
// }
//
// void ASpaceShipPlayerControler::FirePrimaryWeapon(const FInputActionValue& Value)
// {
// }



