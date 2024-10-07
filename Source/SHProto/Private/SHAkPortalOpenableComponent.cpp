#include "SHAkPortalOpenableComponent.h"
#include "AkGameplayTypes.h"

USHAkPortalOpenableComponent::USHAkPortalOpenableComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->InitialState = AkAcousticPortalState::Closed;
}


