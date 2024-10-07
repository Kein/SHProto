#include "MaiWallFollowing.h"

UMaiWallFollowing::UMaiWallFollowing(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->_MoveTimer = 0.00f;
    this->_WantedSpeed = 0.00f;
    this->_GoalActor = NULL;
    this->_SubGoalIndex = 0;
    this->_SpeedCurve = NULL;
    this->_FloorCost = 1.00f;
    this->_WallCost = 1.00f;
    this->_CeilCost = 1.00f;
    this->_OnMeshState = EMaiOnMeshState::Unknown;
    this->_AvoidActor = NULL;
    this->_AvoidRadius = 500.00f;
    this->_AvoidOffset = 300.00f;
    this->_AvoidCost = 10.00f;
    this->_AvoidCountLimit = -1;
    this->_IsUsingLink = false;
    this->_Character = NULL;
    this->_PathRebuildDistance = 100.00f;
    this->_SubGoalReachedDistance = 10.00f;
    this->_SubGoalCheckPeriod = 0.20f;
    this->_SubGoalCheckDistance = 500.00f;
    this->_ChangeSurfaceDistance = 30.00f;
    this->_CollisionChannel = ECC_Vehicle;
    this->_UseCollisionChannel = false;
    this->_UseAvoidance = true;
    this->_AllowUpdateUpVector = true;
}

void UMaiWallFollowing::SnapToFloorMesh(float DeltaTime) {
}

void UMaiWallFollowing::RebuildPath() {
}

bool UMaiWallFollowing::MoveTo(const FVector& goalLocation) {
    return false;
}

void UMaiWallFollowing::FinishUsingSurfaceLink() {
}


