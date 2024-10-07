#pragma once
#include "CoreMinimal.h"
#include "PhysicalAnimationProfileData.h"
#include "PhysicalAnimationBlender.generated.h"

USTRUCT(BlueprintType)
struct FPhysicalAnimationBlender {
    GENERATED_BODY()
public:
    UPROPERTY()
    FPhysicalAnimationProfileData CurrentProfileData;
    
    UPROPERTY()
    float PhysicWeightCurrent;
    
    UPROPERTY()
    float PhysicWeightTarget;
    
    UPROPERTY()
    float PhysicWeightSpeed;
    
    UPROPERTY()
    float CurveTime;
    
    UPROPERTY()
    float BlendToCurve;
    
    UPROPERTY()
    float BlendToCurveSpeed;
    
    SHPROTO_API FPhysicalAnimationBlender();
};

