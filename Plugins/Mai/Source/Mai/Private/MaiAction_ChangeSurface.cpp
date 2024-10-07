#include "MaiAction_ChangeSurface.h"
#include "Templates/SubclassOf.h"

UMaiAction_ChangeSurface::UMaiAction_ChangeSurface() {
    this->_SetBehaviorName = true;
    this->_MoveOnRail = true;
    this->_Snap3D = true;
    this->_SnapUpVector = true;
    this->_ErrorCorrection = false;
}

UMaiAction_ChangeSurface* UMaiAction_ChangeSurface::createActionChangeSurface(UObject* WorldContextObject, FGameplayTagContainer animTags, FTransform targetTransform, TSubclassOf<UMaiAction_ChangeSurface> ActionClass, float PlayRate) {
    return NULL;
}


