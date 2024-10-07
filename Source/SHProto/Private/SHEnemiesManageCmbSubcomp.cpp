#include "SHEnemiesManageCmbSubcomp.h"

USHEnemiesManageCmbSubcomp::USHEnemiesManageCmbSubcomp() {
    this->Settings = NULL;
}

void USHEnemiesManageCmbSubcomp::SHDebug_Character_Combat_ForceDangerMode(bool Force, bool ForcedValue) {
}

void USHEnemiesManageCmbSubcomp::SetCustomInDanger(const bool NewValue, const UObject* Object) {
}

void USHEnemiesManageCmbSubcomp::RefreshInDangerInstant(const UObject* Object) {
}

bool USHEnemiesManageCmbSubcomp::IsInDanger() const {
    return false;
}

bool USHEnemiesManageCmbSubcomp::IsDangerModeForced() const {
    return false;
}

bool USHEnemiesManageCmbSubcomp::HasPrimaryEnemyAggro(bool RequireAggressiveBehaviorStance) const {
    return false;
}

bool USHEnemiesManageCmbSubcomp::HasEnemyAggro(APawn* CheckedEnemy, bool RequireAggressiveBehaviorStance) const {
    return false;
}

bool USHEnemiesManageCmbSubcomp::HasAnyEnemyAggro(bool RequireAggressiveBehaviorStance) const {
    return false;
}

TArray<ACharacter*> USHEnemiesManageCmbSubcomp::GetNearbyEnemies() const {
    return TArray<ACharacter*>();
}

TArray<ACharacter*> USHEnemiesManageCmbSubcomp::GetNearbyDeadEnemies() const {
    return TArray<ACharacter*>();
}

TArray<ACharacter*> USHEnemiesManageCmbSubcomp::FindNearbyEnemies(float InRadius, float InMaxDeltaHeight) const {
    return TArray<ACharacter*>();
}

TArray<ACharacter*> USHEnemiesManageCmbSubcomp::FindNearbyDeadEnemies(float InRadius, float InMaxDeltaHeight) const {
    return TArray<ACharacter*>();
}

void USHEnemiesManageCmbSubcomp::EnableInDangerModeOverride(bool Override, bool Value) {
}


