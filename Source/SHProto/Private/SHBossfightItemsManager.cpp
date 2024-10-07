#include "SHBossfightItemsManager.h"
#include "Components/SceneComponent.h"

ASHBossfightItemsManager::ASHBossfightItemsManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bSaveGame = true;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
}

void ASHBossfightItemsManager::PerformManagementForPhase(int32 InPhaseIndex) {
}


