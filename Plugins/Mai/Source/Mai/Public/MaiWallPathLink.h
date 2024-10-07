#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EMaiLinkType.h"
#include "MaiWallPathLink.generated.h"

USTRUCT()
struct MAI_API FMaiWallPathLink {
    GENERATED_BODY()
public:
    UPROPERTY()
    uint32 _TargetPoly;
    
    UPROPERTY()
    TEnumAsByte<EMaiLinkType::Type> _Type;
    
    UPROPERTY()
    FVector _Location;
    
    UPROPERTY()
    FVector _Start;
    
    UPROPERTY()
    FVector _End;
    
    FMaiWallPathLink();
};

