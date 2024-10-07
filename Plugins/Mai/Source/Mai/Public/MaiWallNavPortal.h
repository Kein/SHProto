#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MaiWallNavPortal.generated.h"

USTRUCT()
struct MAI_API FMaiWallNavPortal {
    GENERATED_BODY()
public:
    UPROPERTY()
    FVector _PointA;
    
    UPROPERTY()
    FVector _PointB;
    
    UPROPERTY()
    int8 _Region;
    
    UPROPERTY()
    int32 _IdxA;
    
    UPROPERTY()
    int32 _IdxB;
    
    FMaiWallNavPortal();
};

