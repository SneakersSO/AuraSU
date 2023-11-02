// Copyright Steven Oliveira

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Aura_CharacterBase.generated.h"

UCLASS(Abstract)
class AURA_API AAura_CharacterBase : public ACharacter
{
	GENERATED_BODY()

public:
	AAura_CharacterBase();

	TObjectPtr<USkeletalMeshComponent> GetWeaponPtr() const { return Weapon; }

protected:
	virtual void BeginPlay() override;

	
	UPROPERTY(EditAnywhere, Category = "Combat")
	TObjectPtr<USkeletalMeshComponent> Weapon;
	
};
