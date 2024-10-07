#pragma once
#include "CoreMinimal.h"
#include "MaiWallNavPolyLink.generated.h"

USTRUCT(BlueprintType)
struct MAI_API FMaiWallNavPolyLink {
    GENERATED_BODY()
public:
    UPROPERTY()
    uint32 _TargetPoly;
    
    UPROPERTY()
    uint32 _NextLink;
    
    UPROPERTY()
    uint8 _Edge;
    
    UPROPERTY()
    uint8 _BorderSide;
    
    UPROPERTY()
    uint8 _BMin;
    
    UPROPERTY()
    uint8 _BMax;
    
    FMaiWallNavPolyLink();
};

