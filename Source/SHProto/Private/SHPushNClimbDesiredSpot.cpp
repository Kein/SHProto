#include "SHPushNClimbDesiredSpot.h"
#include "Components/SceneComponent.h"
#include "SHSafeBeginPlayComponent.h"

ASHPushNClimbDesiredSpot::ASHPushNClimbDesiredSpot(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->SafeBeginPlayComponent = CreateDefaultSubobject<USHSafeBeginPlayComponent>(TEXT("SafeBeginPlayComponent"));
    this->ManagedActor = NULL;
}


bool ASHPushNClimbDesiredSpot::IsManagedActorInDesiredSpot() const {
    return false;
}


