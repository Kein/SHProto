#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EStreamableLevelStatus.h"
#include "StreamableLevelBatchHandle.h"
#include "StreamableLevelHandle.h"
#include "LevelStreamingEventsComponent.generated.h"

class ULevelStreamingEventsComponent;
class ULevelStreamingManager;
class UStreamableLevelBatchState;
class UStreamableLevelState;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class LEVELSTREAMING_API ULevelStreamingEventsComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FStatusChanged, ULevelStreamingEventsComponent*, Events, EStreamableLevelStatus, Status);
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FStreamableLevelHandle> ObservedLevels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool ObserveCurrentLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FStreamableLevelBatchHandle> ObservedBatches;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool ObserveCurrentBatch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool WaitForIdle;
    
    UPROPERTY(BlueprintAssignable)
    FStatusChanged OnLevelsChanged;
    
    UPROPERTY(BlueprintAssignable)
    FStatusChanged OnBatchesChanged;
    
    UPROPERTY()
    ULevelStreamingManager* StreamingManager;
    
    UPROPERTY()
    TArray<UStreamableLevelState*> ObservedLevelStates;
    
    UPROPERTY()
    TArray<UStreamableLevelBatchState*> ObservedBatchStates;
    
public:
    ULevelStreamingEventsComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintPure)
    bool GetLevelsStatus(EStreamableLevelStatus& OutStatus);
    
    UFUNCTION(BlueprintPure)
    bool GetBatchesStatus(EStreamableLevelStatus& OutStatus);
    
};

