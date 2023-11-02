// Copyright Steven Oliveira

#pragma once

#include "CoreMinimal.h"
#include "Character/Aura_CharacterBase.h"
#include "Interaction/EnemyInterface.h"
#include "Aura_Enemy.generated.h"

/**
 * 
 */
UCLASS()
class AURA_API AAura_Enemy : public AAura_CharacterBase, public IEnemyInterface
{
	GENERATED_BODY()

public:
	AAura_Enemy();
	
	virtual void HighlightActor() override;
	virtual void UnHighlightActor() override;

	UPROPERTY(BlueprintReadOnly)
	bool bHighlighted = false;

protected:
	virtual void BeginPlay() override;

private:
	TObjectPtr<USkeletalMeshComponent> MeshComp;
};
