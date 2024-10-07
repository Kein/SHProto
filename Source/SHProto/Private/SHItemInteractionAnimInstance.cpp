#include "SHItemInteractionAnimInstance.h"

USHItemInteractionAnimInstance::USHItemInteractionAnimInstance() {
    this->InteractionType = EItemInteractionType::None;
    this->bItemTakeStartGuard = false;
    this->bTakeItemRightHand = true;
    this->TakeItemDirection = 0.00f;
    this->TakeItemHeight = 0.00f;
    this->TakeItemBlendspace = NULL;
    this->ItemInHandPoseOverride = NULL;
    this->WeaponHandPoseOverride = NULL;
    this->ItemHandPoseOverrideAlpha = 0.00f;
    this->bInvestigationStart = false;
    this->bInvestigationEnd = false;
    this->bInvestigationInstant = false;
    this->bInvestigationBreak = false;
    this->bInvestigationItemSwitch = false;
    this->InvestigationInputSpeedCurve = NULL;
    this->InvestigationAnimationFrame = 0.00f;
    this->bInvestigationFlip = false;
    this->InvestigationFlipSide = -1;
    this->InvestigationType = EItemInvestigationType::InputRotation;
    this->InvestigationFlipPlayRate = 0.00f;
    this->InvestigationFlipStartTime = 1.00f;
    this->SetupAnimation = NULL;
    this->InvestigationLoopAnimation = NULL;
    this->FinishAnimation = NULL;
    this->TakeAnimation = NULL;
    this->FingersPose = NULL;
}


