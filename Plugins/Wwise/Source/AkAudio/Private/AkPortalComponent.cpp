#include "AkPortalComponent.h"

UAkPortalComponent::UAkPortalComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bUseAttachParentBound = true;
    this->bDynamic = false;
    this->InitialState = AkAcousticPortalState::Open;
    this->ObstructionRefreshInterval = 0.00f;
    this->ObstructionCollisionChannel = ECC_Visibility;
    this->FrontRoom = NULL;
    this->BackRoom = NULL;
}

bool UAkPortalComponent::PortalPlacementValid() const {
    return false;
}

bool UAkPortalComponent::PortalHasAnyRoomContext() const {
    return false;
}

void UAkPortalComponent::OpenPortal() {
}

UPrimitiveComponent* UAkPortalComponent::GetPrimitiveParent() const {
    return NULL;
}

AkAcousticPortalState UAkPortalComponent::GetCurrentState() const {
    return AkAcousticPortalState::Closed;
}

void UAkPortalComponent::ClosePortal() {
}


