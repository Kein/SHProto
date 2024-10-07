#include "MaiAction_MoveOnSpline.h"

UMaiAction_MoveOnSpline::UMaiAction_MoveOnSpline() {
    this->_ActionName = TEXT("Action_MoveOnSpline");
    this->_Spline = NULL;
}

UMaiAction_MoveOnSpline* UMaiAction_MoveOnSpline::createActionMoveOnSplineToAP(UObject* WorldContextObject, APawn* Pawn, AMaiActionPoint* Point) {
    return NULL;
}

UMaiAction_MoveOnSpline* UMaiAction_MoveOnSpline::createActionMoveOnSpline(UObject* WorldContextObject, AMaiSplineActor* Spline) {
    return NULL;
}


