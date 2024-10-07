#include "CutsceneCachedCharacter.h"
#include "Engine/EngineTypes.h"
#include "Components/SceneComponent.h"
#include "SkeletalMeshExComponent.h"

ACutsceneCachedCharacter::ACutsceneCachedCharacter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCollideWhenPlacing = true;
    this->SpawnCollisionHandlingMethod = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->RootSceneComponent = (USceneComponent*)RootComponent;
    this->Mesh = CreateDefaultSubobject<USkeletalMeshExComponent>(TEXT("CharacterMesh0"));
    this->Mesh->SetupAttachment(RootComponent);
}


