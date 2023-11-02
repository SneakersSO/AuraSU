// Copyright Steven Oliveira


#include "Character/Aura_Enemy.h"

#include "Aura/Aura.h"

AAura_Enemy::AAura_Enemy()
{
	GetMesh()->SetCollisionResponseToChannel(ECC_Visibility, ECR_Block);
}

void AAura_Enemy::HighlightActor()
{
	MeshComp->SetRenderCustomDepth(true);
	MeshComp->SetCustomDepthStencilValue(CUSTOM_DEPTH_RED);
	
	Weapon->SetRenderCustomDepth(true);
	Weapon->SetCustomDepthStencilValue(CUSTOM_DEPTH_RED);
}

void AAura_Enemy::UnHighlightActor()
{
	MeshComp->SetRenderCustomDepth(false);
	MeshComp->SetCustomDepthStencilValue(0);
	
	Weapon->SetRenderCustomDepth(false);
	Weapon->SetCustomDepthStencilValue(0);
}

void AAura_Enemy::BeginPlay()
{
	Super::BeginPlay();

	MeshComp = GetMesh();
	UnHighlightActor();
}
