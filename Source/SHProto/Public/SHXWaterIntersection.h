#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ESimulatedWaterEffectType.h"
#include "SHXWaterIntersection.generated.h"

USTRUCT(BlueprintType)
struct FSHXWaterIntersection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector WorldLoc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Radius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector Velocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ESimulatedWaterEffectType EffectType;
    
    SHPROTO_API FSHXWaterIntersection();
};

