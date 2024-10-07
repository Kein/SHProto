#pragma once
#include "CoreMinimal.h"
#include "BoneRagdoll.h"
#include "ERagdollProfileName.h"
#include "SkeletonRagdollProfileData.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct FSkeletonRagdollProfileData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ERagdollProfileName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName ConstraintProfile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BlendPhysicTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BlendPhysicInterpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UCurveFloat* BlendCurve;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    bool bInfinitTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float TimeOfBlend;
    
    UPROPERTY()
    float Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bSpecificBones;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FBoneRagdoll> Bones;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float WeightImpact;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float WeightImpactDamping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 ParentLevelImpact;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ParentLevelDamping;
    
    SHPROTO_API FSkeletonRagdollProfileData();
};

