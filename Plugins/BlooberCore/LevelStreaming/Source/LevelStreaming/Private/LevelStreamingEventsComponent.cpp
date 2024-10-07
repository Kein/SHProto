#include "LevelStreamingEventsComponent.h"

ULevelStreamingEventsComponent::ULevelStreamingEventsComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ObserveCurrentLevel = false;
    this->ObserveCurrentBatch = false;
    this->WaitForIdle = false;
    this->StreamingManager = NULL;
}

bool ULevelStreamingEventsComponent::GetLevelsStatus(EStreamableLevelStatus& OutStatus) {
    return false;
}

bool ULevelStreamingEventsComponent::GetBatchesStatus(EStreamableLevelStatus& OutStatus) {
    return false;
}


