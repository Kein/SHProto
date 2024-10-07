#include "SHPushableRangeClampActor.h"
#include "Components/SceneComponent.h"

ASHPushableRangeClampActor::ASHPushableRangeClampActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->ManagedActor = NULL;
}


bool ASHPushableRangeClampActor::IsManagedActorOutOfRange() const {
    return false;
}


