#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "DataLayerStatus.h"
#include "LevelStreamingRequestHandle.h"
#include "StreamableLevel.h"
#include "StreamableLevelHandle.h"
#include "SpawnPointData.generated.h"

USTRUCT(BlueprintType)
struct SIMPLESPAWNPOINTS_API FSpawnPointData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FGuid Guid;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FString CustomName;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FStreamableLevelHandle PersistentLevel;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FStreamableLevel Level;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FTransform position;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    TArray<FLevelStreamingRequestHandle> InitialStreamingRequests;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    TArray<FDataLayerStatus> InitialDataLayerRequests;
    
    FSpawnPointData();
};

