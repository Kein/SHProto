#include "MaiAction_AnimationBase.h"

UMaiAction_AnimationBase::UMaiAction_AnimationBase() {
    this->_OwnerMontage = NULL;
    this->_OwnerCH = NULL;
}

void UMaiAction_AnimationBase::SetOwnerMontage(UAnimMontage* Montage) {
}

void UMaiAction_AnimationBase::SetOwnerCH(ACharacter* ownerCH) {
}

void UMaiAction_AnimationBase::OnOwnerMontageEnds(UAnimMontage* Montage, bool interrupted) {
}


