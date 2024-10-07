#include "SHSwarmFollowPoint.h"
#include "ESwarmRegionType.h"

USHSwarmFollowPoint::USHSwarmFollowPoint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RegionType = ESwarmRegionType::Sphere;
}


