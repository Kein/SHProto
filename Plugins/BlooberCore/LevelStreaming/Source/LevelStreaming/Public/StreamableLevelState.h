#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EStreamableLevelStatus.h"
#include "EStreamableLevelType.h"
#include "StreamableLevel.h"
#include "StreamableLevelHandle.h"
#include "StreamableLevelState.generated.h"

class ULevelStreaming;
class UStreamableLevelBatchState;
class UStreamableLevelConfig;
class UStreamableLevelState;

UCLASS(BlueprintType)
class LEVELSTREAMING_API UStreamableLevelState : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    FStreamableLevel Level;
    
    UPROPERTY()
    ULevelStreaming* LevelStreaming;
    
    UPROPERTY()
    TArray<UStreamableLevelState*> Sublevels;
    
    UPROPERTY()
    EStreamableLevelStatus Status;
    
    UPROPERTY()
    bool StreamingCallbacksBound;
    
public:
    UStreamableLevelState();

    UFUNCTION(BlueprintPure)
    bool ShouldBeAlwaysLoaded() const;
    
    UFUNCTION(BlueprintPure)
    bool IsVisible() const;
    
    UFUNCTION(BlueprintPure)
    bool IsUnloaded() const;
    
    UFUNCTION(BlueprintPure)
    bool IsLoaded() const;
    
    UFUNCTION(BlueprintPure)
    bool IsHidden() const;
    
    UFUNCTION(BlueprintPure)
    bool HasLevelStreaming() const;
    
    UFUNCTION(BlueprintPure)
    bool HasLevelConfig() const;
    
    UFUNCTION(BlueprintPure)
    bool HasBatch() const;
    
private:
    UFUNCTION()
    void HandleLevelUnloaded();
    
    UFUNCTION()
    void HandleLevelShown();
    
    UFUNCTION()
    void HandleLevelLoaded();
    
    UFUNCTION()
    void HandleLevelHidden();
    
public:
    UFUNCTION(BlueprintPure)
    TArray<UStreamableLevelState*> GetSublevels() const;
    
    UFUNCTION(BlueprintPure)
    EStreamableLevelStatus GetStatus() const;
    
    UFUNCTION(BlueprintPure)
    EStreamableLevelType GetLevelType() const;
    
    UFUNCTION(BlueprintPure)
    ULevelStreaming* GetLevelStreaming();
    
    UFUNCTION(BlueprintPure)
    FString GetLevelPathAsString() const;
    
    UFUNCTION(BlueprintPure)
    FName GetLevelPath() const;
    
    UFUNCTION(BlueprintPure)
    FString GetLevelNameAsString() const;
    
    UFUNCTION(BlueprintPure)
    FName GetLevelName() const;
    
    UFUNCTION(BlueprintPure)
    FStreamableLevelHandle GetLevelHandle() const;
    
    UFUNCTION(BlueprintPure)
    FStreamableLevel GetLevel() const;
    
    UFUNCTION(BlueprintPure)
    UStreamableLevelConfig* GetConfig();
    
    UFUNCTION(BlueprintPure)
    UStreamableLevelBatchState* GetBatch();
    
};

