#include "SHItemSpawner.h"
#include "Components/BoxComponent.h"
#include "Components/SceneComponent.h"

ASHItemSpawner::ASHItemSpawner(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
	// FIXME
    this->bSaveGame = true;
    //this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->DebugMeshPreview = NULL;
    //this->DebugInteractionDetectableShapePreview = CreateDefaultSubobject<UBoxComponent>(TEXT("DebugInteractionDetectableShapePreview"));
    this->bAutoRespawnOnStreaming = true;
    this->bShouldRespawnItem = false;
    this->SpawnedItemPtr = NULL;
    //this->DebugInteractionDetectableShapePreview->SetupAttachment(RootComponent);
}

ASHItem* ASHItemSpawner::SpawnRuntimeItem() {
    return NULL;
}

void ASHItemSpawner::ProcessSpawnedItemCollected(ASHItem* ItemRef) {
}

ASHItem* ASHItemSpawner::GetSpawnedItem() const {
    return NULL;
}


