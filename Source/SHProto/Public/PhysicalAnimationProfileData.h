#pragma once
#include "CoreMinimal.h"
#include "EBones.h"
#include "PhysicalAnimationProfileData.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct FPhysicalAnimationProfileData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName PhysicalAnimationProfile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName ConstraintProfile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bEnableGravity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PhysicWeightAtStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PhysicWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UCurveFloat* BlendCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<EBones> Bones;
    
    SHPROTO_API FPhysicalAnimationProfileData();
};

