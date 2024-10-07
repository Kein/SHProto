#include "SHStompedDeadEnemiesEndingValueProcessor.h"

USHStompedDeadEnemiesEndingValueProcessor::USHStompedDeadEnemiesEndingValueProcessor() {
    this->RequiredMinBloodPuddleProgressAlpha = 0.50f;
}

void USHStompedDeadEnemiesEndingValueProcessor::ProcessPrimaryAttackStarted(USHMeleeCmbSubcomp* MeleeCombat, ASHItemWeapon* ItemWeaponContext) {
}

void USHStompedDeadEnemiesEndingValueProcessor::ProcessDeadEnemyDamaged(ASHItemWeaponMelee* MeleeWeapon, AActor* DamagedActorContext) {
}


