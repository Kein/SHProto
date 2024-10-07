#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SkeletonRagdollProfileData.h"
#include "SkeletonRagdollProfile.generated.h"

UCLASS()
class USkeletonRagdollProfile : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY()
    bool bIsActive;
    
    UPROPERTY()
    bool bIsPaused;
    
    UPROPERTY()
    float Blend;
    
    UPROPERTY()
    float TimeFromStart;
    
    UPROPERTY()
    TArray<float> BonesBlend;
    
    UPROPERTY()
    int32 BonesNum;
    
protected:
    UPROPERTY()
    FSkeletonRagdollProfileData ProfileData;
    
    UPROPERTY()
    float TimeScale;
    
    UPROPERTY()
    float TimeOfBlend;
    
public:
    USkeletonRagdollProfile();

};

