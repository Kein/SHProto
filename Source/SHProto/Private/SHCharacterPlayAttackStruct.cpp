#include "SHCharacterPlayAttackStruct.h"

FSHCharacterPlayAttackStruct::FSHCharacterPlayAttackStruct() {
    this->DesiredDistanceFromEnemy = 0.00f;
    this->MaxSlideDistance = 0.00f;
    this->SlideDuration = 0.00f;
    this->SlideBackDuration = 0.00f;
    this->SlideCurve = NULL;
    this->RotationDuration = 0.00f;
    this->RotationCurve = NULL;
    this->HasTargetCameraWorkData = NULL;
    this->NoTargetCameraWorkData = NULL;
}

