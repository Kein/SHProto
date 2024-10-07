#include "MaiScriptAttack.h"

UMaiScriptAttack::UMaiScriptAttack() {
    this->_OwnerMontage = NULL;
    this->_StartSectionDuration = -1.00f;
    this->_AttackAnimTime = 0.00f;
    this->_SnapStartTime = 0.00f;
    this->_SnapOnlyInStartSection = false;
    this->_SnapOnlyToLastHit = false;
    this->_MaxAttackSpeed = 800.00f;
    this->_MaxSlideSpeed = 600.00f;
    this->_AbortBlendOut = 0.15f;
    this->_RotationInterpolationRate = 6.00f;
    this->_MovementDist = 0.00f;
    this->_MovementCurve = NULL;
}

void UMaiScriptAttack::SetSliding(float Distance, UCurveFloat* Curve) {
}

void UMaiScriptAttack::SetOwnerMontage(UAnimMontage* Montage) {
}

void UMaiScriptAttack::SelectBestAnim(FVector Forward) {
}

UAnimMontage* UMaiScriptAttack::PlayOwnerMontage() {
    return NULL;
}

void UMaiScriptAttack::OnOwnerMontageEnds(UAnimMontage* Montage, bool interrupted) {
}


