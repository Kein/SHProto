#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "MaiSpawnerDebugData.generated.h"

USTRUCT()
struct MAI_API FMaiSpawnerDebugData {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleInstanceOnly)
    FGuid _Guid;
    
    UPROPERTY(VisibleInstanceOnly)
    FVector _Location;
    
    UPROPERTY(VisibleInstanceOnly)
    bool _HasFloor;
    
    UPROPERTY(VisibleInstanceOnly)
    bool _IsHidden;
    
    UPROPERTY(VisibleInstanceOnly)
    bool _Restoring;
    
    UPROPERTY(VisibleInstanceOnly)
    bool _WantSpawn;
    
    UPROPERTY(VisibleInstanceOnly)
    FString _Text;
    
    FMaiSpawnerDebugData();
};

