#include "SHGameplayStatisticsData.h"

FSHGameplayStatisticsData::FSHGameplayStatisticsData() {
    this->PlaythroughCombatDifficulty = ECombatDifficulty::Easy;
    this->PlaythroughPuzzleDifficulty = EPuzzlesDifficulty::Easy;
    this->PlaythroughEnding = ESHEndingType::Invalid;
    this->SeenUniqueEndings = 0;
    this->PlaytimeHours = 0;
    this->PlaytimeMinutes = 0;
    this->PlaytimeSeconds = 0;
    this->TravelledDistanceInKilometers = 0.00f;
    this->ConsumableItemsPickedUp = 0;
    this->MemosItemsPickedUp = 0;
    this->LockedDoorAnimsPlayed = 0;
    this->SeenMaps = 0;
    this->EnemiesKilledByRanged = 0;
    this->EnemiesKilledByMelee = 0;
    this->PlayerReceivedDamage = 0;
    this->ShootsFired = 0;
    this->DestroyedGlass = 0;
    this->UsedHealingItems = 0;
    this->PlayerDeathsCount = 0;
    this->PlayerDodgesCount = 0;
}

