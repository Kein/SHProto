#include "MaiAction_SynchronizationBase.h"

UMaiAction_SynchronizationBase::UMaiAction_SynchronizationBase() {
    this->_OtherMontage = NULL;
    this->_OtherCH = NULL;
}

void UMaiAction_SynchronizationBase::SetOtherMontage(UAnimMontage* Montage) {
}

void UMaiAction_SynchronizationBase::SetOtherCH(ACharacter* otherCH) {
}

void UMaiAction_SynchronizationBase::ReleaseOther_Implementation() {
}

void UMaiAction_SynchronizationBase::PossessOther_Implementation() {
}

void UMaiAction_SynchronizationBase::OnOtherMontageEnds(UAnimMontage* Montage, bool interrupted) {
}


