#include "SHCharacterPlayLightingBase.h"
#include "Components/SceneComponent.h"

ASHCharacterPlayLightingBase::ASHCharacterPlayLightingBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
}


