#include "SHSwarmRegionBase.h"

USHSwarmRegionBase::USHSwarmRegionBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bHiddenInGame = true;
    this->IsEnabled = true;
    this->RegionType = ESwarmRegionType::Box;
    this->SphereRadius = 50.00f;
    this->ShowDebug = true;
}

FVector USHSwarmRegionBase::GetScaledShapeSize() const {
    return FVector{};
}


