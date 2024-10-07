#include "MaiAction_PlayAnimation.h"

UMaiAction_PlayAnimation::UMaiAction_PlayAnimation() {
    this->_MoveOnRail = false;
    this->_NonBlocking = false;
    this->_InfinitLoop = false;
    this->_AbortBlendOutTime = 0.10f;
    this->_Duration = -1.00f;
    this->_PlayRate = 1.00f;
    this->_LoopCount = 1;
}

UMaiAction_PlayAnimation* UMaiAction_PlayAnimation::createActionPlayLoopedAnim(UObject* WorldContextObject, FGameplayTagContainer animTags, FName blockBT, int32 LoopCount) {
    return NULL;
}

UMaiAction_PlayAnimation* UMaiAction_PlayAnimation::createActionPlayFromTags(UObject* WorldContextObject, FGameplayTagContainer animTags, FName blockBT, int32 LoopCount) {
    return NULL;
}

UMaiAction_PlayAnimation* UMaiAction_PlayAnimation::createActionPlayAnimWithParams(UObject* WorldContextObject, FDaiAnimPlayParams animParams, FName blockBT, int32 LoopCount) {
    return NULL;
}


