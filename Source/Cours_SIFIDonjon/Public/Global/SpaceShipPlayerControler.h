// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "EnhancedInputSubsystems.h"
#include "SpaceShipPlayerControler.generated.h"

/**
 * 
 */
UCLASS()
class COURS_SIFIDONJON_API ASpaceShipPlayerControler : public APlayerController
{
	GENERATED_BODY()

public:
	ASpaceShipPlayerControler();
	UPROPERTY(EditAnywhere, BlueprintReadWrite,Category="Control Settings")
	UInputMappingContext* InputMappingContext;
	UPROPERTY(EditAnywhere, BlueprintReadWrite,Category="Control Settings")
	UInputAction* Forward;
	UPROPERTY(EditAnywhere, BlueprintReadWrite,Category="Control Settings")
	UInputAction* Right;
	UPROPERTY(EditAnywhere, BlueprintReadWrite,Category="Control Settings")
	UInputAction* Up;
	UPROPERTY(EditAnywhere, BlueprintReadWrite,Category="Control Settings")
	UInputAction* Turn;
	UPROPERTY(EditAnywhere, BlueprintReadWrite,Category="Control Settings")
	UInputAction* FirePrimary;;
	
protected:
	virtual void BeginPlay() override;
	
private: 
	UFUNCTION()
	void MoveForward(const FInputActionValue& Value);
	//UFUNCTION()
	//void MoveRight(const FInputActionValue& Value);
	//UFUNCTION()
	//void MoveUp(const FInputActionValue& Value);
	//UFUNCTION()
	//void Rotate(const FInputActionValue& Value);
	//UFUNCTION()
	//void FirePrimaryWeapon(const FInputActionValue& Value);
};
