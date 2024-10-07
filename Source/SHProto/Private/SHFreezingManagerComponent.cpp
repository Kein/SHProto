#include "SHFreezingManagerComponent.h"

USHFreezingManagerComponent::USHFreezingManagerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

int32 USHFreezingManagerComponent::GetRegisteredFreezingVolumeCount() const {
    return 0;
}

ASHFreezingVolume* USHFreezingManagerComponent::GetEncompassedFreezingVolume(const FVector& InLocation) const {
    return NULL;
}


