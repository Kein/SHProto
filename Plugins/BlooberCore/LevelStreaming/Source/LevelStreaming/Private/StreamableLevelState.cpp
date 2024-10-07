#include "StreamableLevelState.h"

UStreamableLevelState::UStreamableLevelState() {
    this->LevelStreaming = NULL;
    this->Status = EStreamableLevelStatus::Unloaded;
    this->StreamingCallbacksBound = false;
}

bool UStreamableLevelState::ShouldBeAlwaysLoaded() const {
    return false;
}

bool UStreamableLevelState::IsVisible() const {
    return false;
}

bool UStreamableLevelState::IsUnloaded() const {
    return false;
}

bool UStreamableLevelState::IsLoaded() const {
    return false;
}

bool UStreamableLevelState::IsHidden() const {
    return false;
}

bool UStreamableLevelState::HasLevelStreaming() const {
    return false;
}

bool UStreamableLevelState::HasLevelConfig() const {
    return false;
}

bool UStreamableLevelState::HasBatch() const {
    return false;
}

void UStreamableLevelState::HandleLevelUnloaded() {
}

void UStreamableLevelState::HandleLevelShown() {
}

void UStreamableLevelState::HandleLevelLoaded() {
}

void UStreamableLevelState::HandleLevelHidden() {
}

TArray<UStreamableLevelState*> UStreamableLevelState::GetSublevels() const {
    return TArray<UStreamableLevelState*>();
}

EStreamableLevelStatus UStreamableLevelState::GetStatus() const {
    return EStreamableLevelStatus::Unloaded;
}

EStreamableLevelType UStreamableLevelState::GetLevelType() const {
    return EStreamableLevelType::Unknown;
}

ULevelStreaming* UStreamableLevelState::GetLevelStreaming() {
    return NULL;
}

FString UStreamableLevelState::GetLevelPathAsString() const {
    return TEXT("");
}

FName UStreamableLevelState::GetLevelPath() const {
    return NAME_None;
}

FString UStreamableLevelState::GetLevelNameAsString() const {
    return TEXT("");
}

FName UStreamableLevelState::GetLevelName() const {
    return NAME_None;
}

FStreamableLevelHandle UStreamableLevelState::GetLevelHandle() const {
    return FStreamableLevelHandle{};
}

FStreamableLevel UStreamableLevelState::GetLevel() const {
    return FStreamableLevel{};
}

UStreamableLevelConfig* UStreamableLevelState::GetConfig() {
    return NULL;
}

UStreamableLevelBatchState* UStreamableLevelState::GetBatch() {
    return NULL;
}


