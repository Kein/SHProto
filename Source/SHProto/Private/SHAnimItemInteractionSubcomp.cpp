#include "SHAnimItemInteractionSubcomp.h"

USHAnimItemInteractionSubcomp::USHAnimItemInteractionSubcomp() {
    this->InteractionType = EItemInteractionType::None;
    this->InvestigationFlipSide = -1;
    this->ItemInteractionAnimInstance = NULL;
    this->InvestigationItem = NULL;
    this->WeaponManageSubcomp = NULL;
}

void USHAnimItemInteractionSubcomp::TakeItemSetDirection(bool bSetProperHand) {
}

void USHAnimItemInteractionSubcomp::TakeItemAnimationEnd() {
}

void USHAnimItemInteractionSubcomp::PlayPreInvestigationAnimation() {
}

void USHAnimItemInteractionSubcomp::InvestigationSetHandLocationFAB() {
}

void USHAnimItemInteractionSubcomp::HandlePreInvestigationAnimEndEvent() {
}

void USHAnimItemInteractionSubcomp::HandlePostInvestigationAnimEndEvent() {
}

void USHAnimItemInteractionSubcomp::HandleInvestigationSetupAnimEndEvent() {
}

void USHAnimItemInteractionSubcomp::HandleInvestigationFlipAnimEndNotify(float AnimationTime, int32 FlipSide) {
}

void USHAnimItemInteractionSubcomp::HandleInvestigationFinishAnimEndEvent() {
}


