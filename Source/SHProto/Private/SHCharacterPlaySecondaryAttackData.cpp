#include "SHCharacterPlaySecondaryAttackData.h"

FSHCharacterPlaySecondaryAttackData::FSHCharacterPlaySecondaryAttackData() {
    this->DesiredDistanceFromTarget = 0.00f;
    this->SlideDuration = 0.00f;
    this->SlideCurve = NULL;
    this->RotationDuration = 0.00f;
    this->RotationCurve = NULL;
    this->bSecureCameraView = false;
    this->ViewLookAtTargetDuration = 0.00f;
}

