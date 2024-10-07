#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "DataLayerStatus.h"
#include "LevelStreamingRequestHandle.h"
#include "StreamableLevelHandle.h"
#include "BaseGameConfig.generated.h"

class ULevelStreamingRequestCollection;
class UStreamableLevels;

UCLASS(BlueprintType)
class GAMEBASE_API UBaseGameConfig : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool IsDLC;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText DLCButtonText;
    
    UPROPERTY(EditAnywhere)
    UStreamableLevels* StreamableLevels;
    
    UPROPERTY(EditAnywhere)
    ULevelStreamingRequestCollection* RequestCollection;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FStreamableLevelHandle MainPersistentLevel;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FLevelStreamingRequestHandle> InitialStreamingRequests;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FStreamableLevelHandle> InitiallyLoadedLevels;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FStreamableLevelHandle> InitiallyPreloadedLevels;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FDataLayerStatus> InitialDataLayerRequests;
    
    UBaseGameConfig();

};

