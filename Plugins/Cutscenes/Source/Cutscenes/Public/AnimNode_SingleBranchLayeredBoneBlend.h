#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Animation/AnimNodeBase.h"
#include "Animation/AnimTypes.h"
#include "Animation/AnimTypes.h"
#include "Animation/AnimNodeBase.h"
#include "BranchFilterEx.h"
#include "AnimNode_SingleBranchLayeredBoneBlend.generated.h"

USTRUCT(BlueprintType)
struct CUTSCENES_API FAnimNode_SingleBranchLayeredBoneBlend : public FAnimNode_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FPoseLink BasePose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FPoseLink BlendPose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FBranchFilterEx BranchFilter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BlendWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bMeshSpaceRotationBlend;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bMeshSpaceScaleBlend;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<ECurveBlendOption::Type> CurveBlendOption;
    
    UPROPERTY(EditAnywhere)
    bool bBlendRootMotionBasedOnRootBone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 LODThreshold;
    
protected:
    UPROPERTY()
    TArray<FPerBoneBlendWeight> PerBoneBlendWeights;
    
    UPROPERTY()
    FGuid SkeletonGuid;
    
    UPROPERTY()
    FGuid VirtualBoneGuid;
    
public:
    FAnimNode_SingleBranchLayeredBoneBlend();
};

