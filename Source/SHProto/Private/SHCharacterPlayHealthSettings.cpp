#include "SHCharacterPlayHealthSettings.h"

USHCharacterPlayHealthSettings::USHCharacterPlayHealthSettings() {
    this->LowInjuryThreshold = 70.00f;
    this->HeavyInjuryThreshold = 40.00f;
    this->CriticalnjuryThreshold = 10.00f;
    this->ActionHealingRequiredHoldTime = 0.25f;
    this->HealthMaterial = NULL;
    this->DefaultReceiveDamageCameraShakeClass = NULL;
    this->ForceFeedbackOnDamageNormal = NULL;
    this->ForceFeedbackOnDamageStun = NULL;
    this->ForceFeedbackOnDamageContinous = NULL;
    this->ForceFeedbackOnDamageSoft = NULL;
    this->SpecialEffectBlinkKeys = true;
    this->SpecialEffectBlinkPeriod = 2.00f;
}


