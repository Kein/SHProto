#include "SHAbstractDaddyAnimInstanceStateData.h"

USHAbstractDaddyAnimInstanceStateData::USHAbstractDaddyAnimInstanceStateData() {
}

FVector USHAbstractDaddyAnimInstanceStateData::GetBrakingSegmentLocation() const {
    return FVector{};
}

bool USHAbstractDaddyAnimInstanceStateData::GetAreOutstretchedArmsActive() const {
    return false;
}


