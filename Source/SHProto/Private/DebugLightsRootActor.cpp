#include "DebugLightsRootActor.h"
#include "Components/SceneComponent.h"

ADebugLightsRootActor::ADebugLightsRootActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsEditorOnlyActor = true;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
}

TArray<ADebugLightsRootActor*> ADebugLightsRootActor::GetAllLightsRoots() {
    return TArray<ADebugLightsRootActor*>();
}

TArray<AActor*> ADebugLightsRootActor::GetAllChildsWithTag(FName Tag, bool FromAllRoots) {
    return TArray<AActor*>();
}


