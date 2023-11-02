// Copyright Steven Oliveira

#pragma once

#include "CoreMinimal.h"
#include "Character/Aura_CharacterBase.h"
#include "Aura_Character.generated.h"

class USpringArmComponent;
class UCameraComponent;

/**
 * 
 */
UCLASS()
class AURA_API AAura_Character : public AAura_CharacterBase
{
	GENERATED_BODY()

public:
	AAura_Character();

protected:
	

private:

	UPROPERTY(EditAnywhere, Category = "Camera")
	TObjectPtr<USpringArmComponent> SpringArmComponent;

	UPROPERTY(EditAnywhere, Category = "Camera")
	TObjectPtr<UCameraComponent> CameraComponent;

	UPROPERTY(EditAnywhere, Category = "Gameplay")
	float YawRotationRate = 400.f;
};
