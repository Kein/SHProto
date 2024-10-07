#include "SHCharacterPlayAttackBaseData.h"

FSHCharacterPlayAttackBaseData::FSHCharacterPlayAttackBaseData() {
    this->DamageTypeClass = NULL;
    this->HitCheckRadius = 0.00f;
    this->HitCheckAngle = 0.00f;
    this->bEnvTraceOnlyFirstHit = false;
    this->bEnvTraceManualLocations = false;
    this->bEnvTraceFromWeapon = false;
    this->EnvTracePitch = 0.00f;
    this->EnvTraceLength = 0.00f;
    this->bUseSectionSwitching = false;
    this->HitCameraShakeClass = NULL;
    this->HitCameraShakeScale = 0.00f;
    this->EnvHitCameraShakeClass = NULL;
    this->EnvHitCameraShakeScale = 0.00f;
}

