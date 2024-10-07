#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MaiLightRay.generated.h"

USTRUCT(BlueprintType)
struct MAI_API FMaiLightRay {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    FVector _Dir;
    
    UPROPERTY(VisibleAnywhere)
    FVector _Start;
    
    UPROPERTY(VisibleAnywhere)
    FVector _End;
    
    UPROPERTY(VisibleAnywhere)
    bool _Hit;
    
    UPROPERTY(VisibleAnywhere)
    FVector _HitNormal;
    
    UPROPERTY(VisibleAnywhere)
    FVector _HitPoint;
    
    FMaiLightRay();
};

