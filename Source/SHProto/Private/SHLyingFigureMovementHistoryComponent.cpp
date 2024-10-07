#include "SHLyingFigureMovementHistoryComponent.h"

USHLyingFigureMovementHistoryComponent::USHLyingFigureMovementHistoryComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MinimumDistance = 10.00f;
    this->MaximumDistance = 1000.00f;
    this->MaximumDirectionAnglePerDistance = 10.00f;
    this->MaximumRotationAngle = 10.00f;
    this->MaximumScaleDelta = 0.10f;
    this->MinimumHistoryDistance = 500.00f;
    this->TeleportDistance = 500.00f;
    this->bDrawMovementPath = false;
}

void USHLyingFigureMovementHistoryComponent::ResetMovementHistory() {
}

bool USHLyingFigureMovementHistoryComponent::FindWaypointAtTime(FTransform& OutTransform, float& OutDistance, float& OutTimeBehind, float InDeltaTimeBehind, float InMinimumDistanceFromCurrentPosition) const {
    return false;
}

bool USHLyingFigureMovementHistoryComponent::FindWaypointAtDistance(FTransform& OutTransform, float& OutDistance, float& OutTimeBehind, float InDistanceBehind, float InMinimumDistanceFromCurrentPosition) const {
    return false;
}

void USHLyingFigureMovementHistoryComponent::DebugDrawMovementPath(float InDuration) const {
}

bool USHLyingFigureMovementHistoryComponent::AddMovementWaypoint(const FTransform& InWorldTransform) {
    return false;
}


