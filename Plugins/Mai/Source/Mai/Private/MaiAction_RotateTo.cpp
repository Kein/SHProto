#include "MaiAction_RotateTo.h"

UMaiAction_RotateTo::UMaiAction_RotateTo() {
    this->_ActionName = TEXT("Action_RotateTo");
    this->_LookAtActor = NULL;
    this->_Precision = 0.00f;
}

UMaiAction_RotateTo* UMaiAction_RotateTo::createActionRotateToLocation(UObject* WorldContextObject, FVector Location, float Precision) {
    return NULL;
}

UMaiAction_RotateTo* UMaiAction_RotateTo::createActionRotateToActor(UObject* WorldContextObject, AActor* Actor, float Precision) {
    return NULL;
}


