#include "CutsceneTexturesStreamingBoostLocation.h"
#include "Components/SceneComponent.h"

ACutsceneTexturesStreamingBoostLocation::ACutsceneTexturesStreamingBoostLocation(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
}


