#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MaiWallPathPoint.generated.h"

USTRUCT(BlueprintType)
struct MAI_API FMaiWallPathPoint {
    GENERATED_BODY()
public:
    UPROPERTY()
    FVector _Location;
    
    UPROPERTY()
    FVector _Normal;
    
    UPROPERTY()
    uint64 _NavID;
    
    UPROPERTY()
    uint32 _CustomLinkId;
    
    FMaiWallPathPoint();
};

