#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EStreamingIntegrationSpeed.h"
#include "LevelStreamingRequestHandle.h"
#include "StreamableLevel.h"
#include "StreamableLevelBatchHandle.h"
#include "StreamableLevelHandle.h"
#include "LevelStreamingStaticLibrary.generated.h"

class AActor;
class ULevelStreamingRequestState;
class UObject;
class UStreamableLevelBatchState;
class UStreamableLevelState;

UCLASS(BlueprintType)
class LEVELSTREAMING_API ULevelStreamingStaticLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    ULevelStreamingStaticLibrary();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void UnloadStreamedLevel(UObject* WorldContextObject, const FStreamableLevelHandle LevelHandle, const int32 Priority);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void UnloadStreamedBatch(UObject* WorldContextObject, const FStreamableLevelBatchHandle BatchHandle, const int32 Priority);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void TravelToLevel(UObject* WorldContextObject, const FStreamableLevelHandle LevelHandle);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static ULevelStreamingRequestState* SubmitRequest(UObject* WorldContextObject, const FLevelStreamingRequestHandle RequestHandle);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void StartLevelStreaming(UObject* WorldContextObject, const FStreamableLevelHandle LevelHandle, const bool MakeVisible, const int32 Priority);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void StartBatchStreaming(UObject* WorldContextObject, const FStreamableLevelBatchHandle BatchHandle, const bool MakeVisible, const int32 Priority);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ShowStreamedLevel(UObject* WorldContextObject, const FStreamableLevelHandle LevelHandle, const bool LoadIfUnloaded, const int32 Priority);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ShowStreamedBatch(UObject* WorldContextObject, const FStreamableLevelBatchHandle BatchHandle, const bool LoadIfUnloaded, const int32 Priority);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetStreamingIntegrationSpeed(const UObject* WorldContextObject, TEnumAsByte<EStreamingIntegrationSpeed> Speed);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetStreamedLevelTransform(UObject* WorldContextObject, const FStreamableLevelHandle LevelHandle, const FTransform& Transform, const TSoftObjectPtr<AActor> Pivot);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetStreamedBatchTransform(UObject* WorldContextObject, const FStreamableLevelBatchHandle BatchHandle, const FTransform& Transform, const TSoftObjectPtr<AActor> Pivot);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ResetStreamedLevelTransform(UObject* WorldContextObject, const FStreamableLevelHandle LevelHandle);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ResetStreamedBatchTransform(UObject* WorldContextObject, const FStreamableLevelBatchHandle BatchHandle);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void RemoveRuntimeActorFromDatabase(UObject* WorldContextObject, AActor* Actor);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsActorBatchLoadedVisible(UObject* WorldContextObject, AActor* Actor);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void HideStreamedLevel(UObject* WorldContextObject, const FStreamableLevelHandle LevelHandle, const int32 Priority);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void HideStreamedBatch(UObject* WorldContextObject, const FStreamableLevelBatchHandle BatchHandle, const int32 Priority);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static TArray<UStreamableLevelState*> GetAllLevelStates(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static TArray<UStreamableLevelBatchState*> GetAllBatchStates(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UStreamableLevelState* FindActorLevelState(UObject* WorldContextObject, AActor* Actor);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UStreamableLevelBatchState* FindActorBatchState(UObject* WorldContextObject, AActor* Actor);
    
    UFUNCTION(BlueprintPure)
    static FString ConvertRequestHandleToString(FLevelStreamingRequestHandle RequestHandle);
    
    UFUNCTION(BlueprintPure)
    static FString ConvertLevelHandleToString(FStreamableLevelHandle LevelHandle);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UStreamableLevelState* ConvertLevelHandleToLevelState(UObject* WorldContextObject, const FStreamableLevelHandle& LevelHandle);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static void ConvertLevelHandleToLevel(UObject* WorldContextObject, const FStreamableLevelHandle& LevelHandle, FStreamableLevel& OutLevel, bool& OutIsValid);
    
    UFUNCTION(BlueprintPure)
    static FString ConvertBatchHandleToString(FStreamableLevelBatchHandle BatchHandle);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void CacheWorldState(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static bool AreRequestHandlesNotEqual(const FLevelStreamingRequestHandle A, const FLevelStreamingRequestHandle B);
    
    UFUNCTION(BlueprintPure)
    static bool AreRequestHandlesEqual(const FLevelStreamingRequestHandle A, const FLevelStreamingRequestHandle B);
    
    UFUNCTION(BlueprintPure)
    static bool AreLevelHandlesNotEqual(const FStreamableLevelHandle A, const FStreamableLevelHandle B);
    
    UFUNCTION(BlueprintPure)
    static bool AreLevelHandlesEqual(const FStreamableLevelHandle A, const FStreamableLevelHandle B);
    
    UFUNCTION(BlueprintPure)
    static bool AreLevelBatchHandlesNotEqual(const FStreamableLevelBatchHandle A, const FStreamableLevelBatchHandle B);
    
    UFUNCTION(BlueprintPure)
    static bool AreLevelBatchHandlesEqual(const FStreamableLevelBatchHandle A, const FStreamableLevelBatchHandle B);
    
};

