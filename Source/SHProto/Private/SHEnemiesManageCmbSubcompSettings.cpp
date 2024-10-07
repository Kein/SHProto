#include "SHEnemiesManageCmbSubcompSettings.h"

USHEnemiesManageCmbSubcompSettings::USHEnemiesManageCmbSubcompSettings() {
    this->InDangerOnDelaySeconds = 1.00f;
    this->InDangerOffCooldownSeconds = 12.50f;
    this->EnemyInSightClampRadius = 2500.00f;
    this->EnemyInSightMinDirectionDotProduct = 0.00f;
    this->LoudnessMeterRtpcObject = NULL;
    this->RequiredLoudnessMeterRtpcValue = -10.00f;
}


