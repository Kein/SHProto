#include "SHMovementObstacleDetection.h"

USHMovementObstacleDetection::USHMovementObstacleDetection() {
    this->StopMovementThreshold = 22.50f;
    this->BlockSprintThreshold = 45.00f;
    this->MovementComponent = NULL;
    this->Capsule = NULL;
    this->OwnerCharacter = NULL;
    this->Initialized = false;
}

void USHMovementObstacleDetection::SHDebug_Character_MovementObstacleDetection_ValuesDebug() {
}

void USHMovementObstacleDetection::SHDebug_Character_MovementObstacleDetection_Enabled(bool Enable) {
}

void USHMovementObstacleDetection::SHDebug_Character_MovementObstacleDetection_DrawDebug() {
}


