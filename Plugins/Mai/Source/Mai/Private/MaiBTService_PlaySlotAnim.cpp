#include "MaiBTService_PlaySlotAnim.h"

UMaiBTService_PlaySlotAnim::UMaiBTService_PlaySlotAnim() {
    this->NodeName = TEXT("Play Slot Anim");
    this->_SelectAnimByTag = false;
    this->_AnimationToPlay = NULL;
    this->_PlayRate = 1.00f;
    this->_TimeToStartAt = 0.00f;
    this->_Slot = TEXT("DefaultSlot");
    this->_BlendInTime = 0.25f;
    this->_BlendOutTime = 0.25f;
    this->_LoopCount = 1;
    this->CachedSkelMesh = NULL;
    this->_PlayedMontage = NULL;
}


