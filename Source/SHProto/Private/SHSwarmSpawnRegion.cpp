#include "SHSwarmSpawnRegion.h"
#include "ESwarmRegionType.h"

USHSwarmSpawnRegion::USHSwarmSpawnRegion(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RegionType = ESwarmRegionType::Sphere;
}


