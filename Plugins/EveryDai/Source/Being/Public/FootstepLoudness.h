#pragma once
#include "CoreMinimal.h"
#include "FootstepLoudness.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct BEING_API FFootstepLoudness {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float _AINoiseModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UCurveFloat* _Curve;
    
    UPROPERTY(EditAnywhere)
    bool _NormalizedCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float _MaxSpeed;
    
    FFootstepLoudness();
};

