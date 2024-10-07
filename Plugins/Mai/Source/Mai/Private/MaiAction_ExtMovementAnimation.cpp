#include "MaiAction_ExtMovementAnimation.h"
#include "Templates/SubclassOf.h"

UMaiAction_ExtMovementAnimation::UMaiAction_ExtMovementAnimation() {
    this->_ActionName = TEXT("ExtMovement");
    this->_SetBehaviorName = true;
    this->_MoveOnRail = true;
    this->_NavLink = NULL;
    this->_StartInA = false;
    this->_LeftMargin = 0.00f;
    this->_RightMargin = 0.00f;
    this->_Attack = NULL;
    this->_Enemy = NULL;
}

UMaiAction_ExtMovementAnimation* UMaiAction_ExtMovementAnimation::createActionExtMovementAnimation(UObject* WorldContextObject, FGameplayTagContainer animTags, AMaiNavLink* NavLink, bool startSide, TSubclassOf<UMaiAction_ExtMovementAnimation> ActionClass) {
    return NULL;
}


