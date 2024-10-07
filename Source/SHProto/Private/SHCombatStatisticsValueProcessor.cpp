#include "SHCombatStatisticsValueProcessor.h"

USHCombatStatisticsValueProcessor::USHCombatStatisticsValueProcessor() {
    this->MeleeWeaponKillcount = 0;
    this->RangedWeaponKillcount = 0;
    this->RangedShootsFired = 0;
    this->PerformedDodges = 0;
    this->BrokenGlass = 0;
    this->HealsApplied = 0;
    this->ReceivedDamage = 0.00f;
}

void USHCombatStatisticsValueProcessor::ProcessRangedFireSuccess(USHRangedCmbSubcomp* RangedCombatSubcomponent, ASHItemWeapon* ItemWeaponContext) {
}


