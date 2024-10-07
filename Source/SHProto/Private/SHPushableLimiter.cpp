#include "SHPushableLimiter.h"
#include "Components/SceneComponent.h"

ASHPushableLimiter::ASHPushableLimiter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
}


