#include "SHNPCAnimInstanceStateData.h"

USHNPCAnimInstanceStateData::USHNPCAnimInstanceStateData() {
}

float USHNPCAnimInstanceStateData::GetTurnInPlaceAngle() const {
    return 0.0f;
}

float USHNPCAnimInstanceStateData::GetStrafeAngle() const {
    return 0.0f;
}

void USHNPCAnimInstanceStateData::GetLookAtRotation(FRotator& OutWorldRotation, float& OutRotationAlpha) const {
}

float USHNPCAnimInstanceStateData::GetDesiredStrafeAngle() const {
    return 0.0f;
}

FVector USHNPCAnimInstanceStateData::GetDesiredLocalVelocity() const {
    return FVector{};
}

float USHNPCAnimInstanceStateData::GetDesiredLocalRotationYaw() const {
    return 0.0f;
}


