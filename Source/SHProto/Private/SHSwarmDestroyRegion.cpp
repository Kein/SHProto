#include "SHSwarmDestroyRegion.h"
#include "ESwarmRegionType.h"

USHSwarmDestroyRegion::USHSwarmDestroyRegion(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RegionType = ESwarmRegionType::Sphere;
}


