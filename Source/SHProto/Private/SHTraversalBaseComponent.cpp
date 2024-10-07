#include "SHTraversalBaseComponent.h"

USHTraversalBaseComponent::USHTraversalBaseComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Type = ESHTraversalType::Undefined;
    this->bEnabledBeginPlay = true;
    this->AutoInvokeMaxDist2D = 60.00f;
    this->bManageOwnerTick = true;
    this->ProximitySphere = NULL;
    this->InteractingCharacter = NULL;
}

void USHTraversalBaseComponent::SetUnavailable(bool InUnavailable, UObject* Object) {
}

void USHTraversalBaseComponent::SetEnabled(bool InEnable, UObject* Object) {
}

void USHTraversalBaseComponent::ProcessProximityEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex) {
}

void USHTraversalBaseComponent::ProcessProximityBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex, bool FromSweep, const FHitResult& SweepResult) {
}

bool USHTraversalBaseComponent::IsUnavailable() const {
    return false;
}

bool USHTraversalBaseComponent::IsEnabled() const {
    return false;
}


