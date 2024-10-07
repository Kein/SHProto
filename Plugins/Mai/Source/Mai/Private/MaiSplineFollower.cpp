#include "MaiSplineFollower.h"

UMaiSplineFollower::UMaiSplineFollower(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->_Spline = NULL;
    this->_SplineDist = 0.00f;
    this->_SplineSpeed = 0.00f;
    this->_Character = NULL;
}

void UMaiSplineFollower::StopSplineMove() {
}

AMaiSplineActor* UMaiSplineFollower::spawnSplineToAP(APawn* Pawn, AMaiActionPoint* Point) {
    return NULL;
}

void UMaiSplineFollower::SetSpline(AMaiSplineActor* Spline) {
}

void UMaiSplineFollower::RequestSplineMove(AMaiSplineActor* Spline) {
}

void UMaiSplineFollower::MoveOnSpline(float DeltaTime) {
}

bool UMaiSplineFollower::IsMoving() const {
    return false;
}


