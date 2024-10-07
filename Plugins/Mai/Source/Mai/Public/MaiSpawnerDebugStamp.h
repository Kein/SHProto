#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MaiSpawnerDebugData.h"
#include "MaiSpawnerDebugStamp.generated.h"

USTRUCT(BlueprintType)
struct MAI_API FMaiSpawnerDebugStamp {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleInstanceOnly)
    TArray<FMaiSpawnerDebugData> _DebugData;
    
    UPROPERTY(VisibleInstanceOnly)
    FTransform _PlayerTransform;
    
    FMaiSpawnerDebugStamp();
};

