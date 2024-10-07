#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MaiWallNavConnection.h"
#include "MaiWallNavPoint.generated.h"

USTRUCT()
struct MAI_API FMaiWallNavPoint {
    GENERATED_BODY()
public:
    UPROPERTY()
    FVector _Location;
    
    UPROPERTY()
    TArray<FMaiWallNavConnection> _Connections;
    
    FMaiWallNavPoint();
};

