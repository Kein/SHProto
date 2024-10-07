#include "LevelStreamingStaticLibrary.h"

ULevelStreamingStaticLibrary::ULevelStreamingStaticLibrary() {
}

void ULevelStreamingStaticLibrary::UnloadStreamedLevel(UObject* WorldContextObject, const FStreamableLevelHandle LevelHandle, const int32 Priority) {
}

void ULevelStreamingStaticLibrary::UnloadStreamedBatch(UObject* WorldContextObject, const FStreamableLevelBatchHandle BatchHandle, const int32 Priority) {
}

void ULevelStreamingStaticLibrary::TravelToLevel(UObject* WorldContextObject, const FStreamableLevelHandle LevelHandle) {
}

ULevelStreamingRequestState* ULevelStreamingStaticLibrary::SubmitRequest(UObject* WorldContextObject, const FLevelStreamingRequestHandle RequestHandle) {
    return NULL;
}

void ULevelStreamingStaticLibrary::StartLevelStreaming(UObject* WorldContextObject, const FStreamableLevelHandle LevelHandle, const bool MakeVisible, const int32 Priority) {
}

void ULevelStreamingStaticLibrary::StartBatchStreaming(UObject* WorldContextObject, const FStreamableLevelBatchHandle BatchHandle, const bool MakeVisible, const int32 Priority) {
}

void ULevelStreamingStaticLibrary::ShowStreamedLevel(UObject* WorldContextObject, const FStreamableLevelHandle LevelHandle, const bool LoadIfUnloaded, const int32 Priority) {
}

void ULevelStreamingStaticLibrary::ShowStreamedBatch(UObject* WorldContextObject, const FStreamableLevelBatchHandle BatchHandle, const bool LoadIfUnloaded, const int32 Priority) {
}

void ULevelStreamingStaticLibrary::SetStreamingIntegrationSpeed(const UObject* WorldContextObject, TEnumAsByte<EStreamingIntegrationSpeed> Speed) {
}

void ULevelStreamingStaticLibrary::SetStreamedLevelTransform(UObject* WorldContextObject, const FStreamableLevelHandle LevelHandle, const FTransform& Transform, const TSoftObjectPtr<AActor> Pivot) {
}

void ULevelStreamingStaticLibrary::SetStreamedBatchTransform(UObject* WorldContextObject, const FStreamableLevelBatchHandle BatchHandle, const FTransform& Transform, const TSoftObjectPtr<AActor> Pivot) {
}

void ULevelStreamingStaticLibrary::ResetStreamedLevelTransform(UObject* WorldContextObject, const FStreamableLevelHandle LevelHandle) {
}

void ULevelStreamingStaticLibrary::ResetStreamedBatchTransform(UObject* WorldContextObject, const FStreamableLevelBatchHandle BatchHandle) {
}

void ULevelStreamingStaticLibrary::RemoveRuntimeActorFromDatabase(UObject* WorldContextObject, AActor* Actor) {
}

bool ULevelStreamingStaticLibrary::IsActorBatchLoadedVisible(UObject* WorldContextObject, AActor* Actor) {
    return false;
}

void ULevelStreamingStaticLibrary::HideStreamedLevel(UObject* WorldContextObject, const FStreamableLevelHandle LevelHandle, const int32 Priority) {
}

void ULevelStreamingStaticLibrary::HideStreamedBatch(UObject* WorldContextObject, const FStreamableLevelBatchHandle BatchHandle, const int32 Priority) {
}

TArray<UStreamableLevelState*> ULevelStreamingStaticLibrary::GetAllLevelStates(UObject* WorldContextObject) {
    return TArray<UStreamableLevelState*>();
}

TArray<UStreamableLevelBatchState*> ULevelStreamingStaticLibrary::GetAllBatchStates(UObject* WorldContextObject) {
    return TArray<UStreamableLevelBatchState*>();
}

UStreamableLevelState* ULevelStreamingStaticLibrary::FindActorLevelState(UObject* WorldContextObject, AActor* Actor) {
    return NULL;
}

UStreamableLevelBatchState* ULevelStreamingStaticLibrary::FindActorBatchState(UObject* WorldContextObject, AActor* Actor) {
    return NULL;
}

FString ULevelStreamingStaticLibrary::ConvertRequestHandleToString(FLevelStreamingRequestHandle RequestHandle) {
    return TEXT("");
}

FString ULevelStreamingStaticLibrary::ConvertLevelHandleToString(FStreamableLevelHandle LevelHandle) {
    return TEXT("");
}

UStreamableLevelState* ULevelStreamingStaticLibrary::ConvertLevelHandleToLevelState(UObject* WorldContextObject, const FStreamableLevelHandle& LevelHandle) {
    return NULL;
}

void ULevelStreamingStaticLibrary::ConvertLevelHandleToLevel(UObject* WorldContextObject, const FStreamableLevelHandle& LevelHandle, FStreamableLevel& OutLevel, bool& OutIsValid) {
}

FString ULevelStreamingStaticLibrary::ConvertBatchHandleToString(FStreamableLevelBatchHandle BatchHandle) {
    return TEXT("");
}

void ULevelStreamingStaticLibrary::CacheWorldState(UObject* WorldContextObject) {
}

bool ULevelStreamingStaticLibrary::AreRequestHandlesNotEqual(const FLevelStreamingRequestHandle A, const FLevelStreamingRequestHandle B) {
    return false;
}

bool ULevelStreamingStaticLibrary::AreRequestHandlesEqual(const FLevelStreamingRequestHandle A, const FLevelStreamingRequestHandle B) {
    return false;
}

bool ULevelStreamingStaticLibrary::AreLevelHandlesNotEqual(const FStreamableLevelHandle A, const FStreamableLevelHandle B) {
    return false;
}

bool ULevelStreamingStaticLibrary::AreLevelHandlesEqual(const FStreamableLevelHandle A, const FStreamableLevelHandle B) {
    return false;
}

bool ULevelStreamingStaticLibrary::AreLevelBatchHandlesNotEqual(const FStreamableLevelBatchHandle A, const FStreamableLevelBatchHandle B) {
    return false;
}

bool ULevelStreamingStaticLibrary::AreLevelBatchHandlesEqual(const FStreamableLevelBatchHandle A, const FStreamableLevelBatchHandle B) {
    return false;
}


