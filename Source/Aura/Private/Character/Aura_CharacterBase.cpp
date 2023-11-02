// Copyright Steven Oliveira


#include "Character/Aura_CharacterBase.h"

// Sets default values
AAura_CharacterBase::AAura_CharacterBase()
{
	PrimaryActorTick.bCanEverTick = false;

	Weapon = CreateDefaultSubobject<USkeletalMeshComponent>("Weapon");
	Weapon->SetupAttachment(GetMesh(), FName("WeaponHandSocket"));
	Weapon->SetCollisionEnabled(ECollisionEnabled::NoCollision);
}


void AAura_CharacterBase::BeginPlay()
{
	Super::BeginPlay();
	
}
