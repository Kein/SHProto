#include "LevelStreamingManager.h"

ULevelStreamingManager::ULevelStreamingManager() {
    this->StreamableLevels = NULL;
    this->TaskSelector = NULL;
    this->Database = NULL;
    this->DebugWidget = NULL;
}

void ULevelStreamingManager::OnActorEndPlayDynamic(AActor* Actor, TEnumAsByte<EEndPlayReason::Type> EndPlayReason) {
}

void ULevelStreamingManager::OnActorEndPlay(AActor* Actor, TEnumAsByte<EEndPlayReason::Type> EndPlayReason) {
}


