#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "DataLayerStatus.h"
#include "LevelStreamingRequestHandle.h"
#include "StreamableLevel.h"
#include "StreamableLevelHandle.h"
#include "GenericSpawnPointData.generated.h"

USTRUCT(BlueprintType)
struct GAMEBASE_API FGenericSpawnPointData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FGuid Guid;
    
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
    
    FGenericSpawnPointData();
};

