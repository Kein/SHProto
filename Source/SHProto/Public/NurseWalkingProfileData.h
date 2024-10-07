#pragma once
#include "CoreMinimal.h"
#include "NurseWalkingProfileData.generated.h"

USTRUCT(BlueprintType)
struct FNurseWalkingProfileData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float WalkSpeedFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float WalkRootMotionScale;
    
    SHPROTO_API FNurseWalkingProfileData();
};

