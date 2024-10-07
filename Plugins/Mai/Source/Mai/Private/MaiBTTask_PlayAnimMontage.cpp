#include "MaiBTTask_PlayAnimMontage.h"

UMaiBTTask_PlayAnimMontage::UMaiBTTask_PlayAnimMontage() {
    this->NodeName = TEXT("Play Slot Animation");
    this->_SelectAnimByTag = false;
    this->_AnimationToPlay = NULL;
    this->_SelectAnimByAngle = false;
    this->_SelectAnimOnNav = false;
    this->_NonBlocking = false;
    this->_NonBlockingAbort = true;
    this->_InfinitLoop = false;
    this->_Slot = TEXT("DefaultSlot");
    this->_PlayRate = 1.00f;
    this->_TimeToStartAt = 0.00f;
    this->_AbortBlendOutTime = 0.10f;
    this->_Duration = -1.00f;
    this->_LoopCount = 1;
    this->MyOwnerComp = NULL;
    this->_AbortMontage = NULL;
}


