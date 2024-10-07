#include "SHAudioHealthSettings.h"

USHAudioHealthSettings::USHAudioHealthSettings() {
    this->ReceivedDamageEvent_Generic = NULL;
    this->Play_CriticalInjuryEvent = NULL;
    this->Stop_CriticalInjuryEvent = NULL;
    this->RTPC_HealthPercentage = NULL;
    this->AudioHealthState_Fine = NULL;
    this->AudioHealthState_LowInjury = NULL;
    this->AudioHealthState_HeavyInjury = NULL;
    this->AudioHealthState_CriticalInjury = NULL;
    this->AudioHealthState_Dead = NULL;
}


