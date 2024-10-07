#include "SHLyingFigureAnimInstanceStateData.h"

USHLyingFigureAnimInstanceStateData::USHLyingFigureAnimInstanceStateData() {
}

float USHLyingFigureAnimInstanceStateData::GetInaccurateLocomotionAnimationsDistanceAccuracy() const {
    return 0.0f;
}

float USHLyingFigureAnimInstanceStateData::GetCrawlBendYawAngle() const {
    return 0.0f;
}

float USHLyingFigureAnimInstanceStateData::GetCrawlBendPitchAngle() const {
    return 0.0f;
}

bool USHLyingFigureAnimInstanceStateData::GetAreInaccurateLocomotionAnimationsAllowed() const {
    return false;
}

bool USHLyingFigureAnimInstanceStateData::GetAreAllowedInaccurateLocomotionAnimationsOfDistance(float InAnimationDistance) const {
    return false;
}


