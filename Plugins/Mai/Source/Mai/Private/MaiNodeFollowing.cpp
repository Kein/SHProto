#include "MaiNodeFollowing.h"

UMaiNodeFollowing::UMaiNodeFollowing(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->_MinSpeed = 30.00f;
    this->_StartSpeed = 60.00f;
    this->_InterpSpeed = 20.00f;
    this->_LandingDistance = 50.00f;
    this->_MoveLanding = false;
    this->_MoveTimer = 0.00f;
    this->_WantedSpeed = 0.00f;
    this->_SpeedCurve = NULL;
    this->_Character = NULL;
    this->_AcceptanceRadius = 10.00f;
    this->_PathRebuildDistance = 100.00f;
    this->_SubGoalReachedDistance = 50.00f;
    this->_SubGoalCheckPeriod = 1.00f;
    this->_CollisionChannel = ECC_Vehicle;
    this->_UseCollisionChannel = false;
    this->_Debug = false;
}

bool UMaiNodeFollowing::PreparePathTo(const FVector& goalLocation) {
    return false;
}

bool UMaiNodeFollowing::MoveTo(const FVector& goalLocation) {
    return false;
}

bool UMaiNodeFollowing::IsGoalReached(const FVector& goalLocation) const {
    return false;
}


