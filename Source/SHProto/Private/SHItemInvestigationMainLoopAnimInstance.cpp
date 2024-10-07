#include "SHItemInvestigationMainLoopAnimInstance.h"

USHItemInvestigationMainLoopAnimInstance::USHItemInvestigationMainLoopAnimInstance() {
    this->InvestigationAnimationFrame = 0.00f;
    this->bInvestigationFlip = false;
    this->InvestigationFlipSide = -1;
    this->InvestigationType = EItemInvestigationType::InputRotation;
    this->InvestigationFlipPlayRate = 0.00f;
    this->InvestigationFlipStartTime = 1.00f;
    this->InvestigationLoopAnimation = NULL;
    this->UseLoopAnimationReverse = false;
    this->InvestigationLoopAnimationReverse = NULL;
    this->ItemFlipCachedProgress = 0.00f;
    this->ItemFlipCurrentProgress = 0.00f;
}


