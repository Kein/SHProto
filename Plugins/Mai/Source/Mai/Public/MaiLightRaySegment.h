#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MaiLightRaySegment.generated.h"

USTRUCT(BlueprintType)
struct MAI_API FMaiLightRaySegment {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    FVector _Start;
    
    UPROPERTY(VisibleAnywhere)
    FVector _End;
    
    UPROPERTY(VisibleAnywhere)
    float _DistSqr;
    
    UPROPERTY(VisibleAnywhere)
    FVector _LocalEnd;
    
    UPROPERTY(VisibleAnywhere)
    bool _CutEnd;
    
    UPROPERTY(VisibleAnywhere)
    bool _CutStart;
    
    FMaiLightRaySegment();
};

