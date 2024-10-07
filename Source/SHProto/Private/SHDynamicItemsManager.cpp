#include "SHDynamicItemsManager.h"
#include "Components/SceneComponent.h"

ASHDynamicItemsManager::ASHDynamicItemsManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bSaveGame = true;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->bCollectDifferentItemData = false;
    this->CurrentQueueIndex = 0;
}

void ASHDynamicItemsManager::ProcessItemCollected(ASHItem* ItemPtr) {
}


