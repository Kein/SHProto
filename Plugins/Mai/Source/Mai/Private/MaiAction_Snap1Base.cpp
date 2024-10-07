#include "MaiAction_Snap1Base.h"

UMaiAction_Snap1Base::UMaiAction_Snap1Base() {
    this->_OwnerATB = NULL;
    this->_RotationInterpSpeed = 6.00f;
    this->_TranslationInterpSpeed = 200.00f;
    this->_MoveOnRail = true;
    this->_Disconnect = false;
    this->_SyncSnap = false;
    this->_BlockSnap = false;
    this->_Snap3D = false;
    this->_SnapUpVector = false;
    this->_IdealTransformAsTarget = false;
    this->_ErrorCorrection = true;
    this->_SnapMoveMulMin = 0.00f;
    this->_SnapMoveMulMax = 3.00f;
    this->_SnapMoveMulInterp = 10.00f;
}

UAnimMontage* UMaiAction_Snap1Base::PlayOwnerMontage() {
    return NULL;
}



FVector UMaiAction_Snap1Base::GetSectionOffset() const {
    return FVector{};
}

void UMaiAction_Snap1Base::CalculateIdealTransforms() {
}


