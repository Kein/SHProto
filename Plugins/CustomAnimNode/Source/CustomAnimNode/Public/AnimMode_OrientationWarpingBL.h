#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNodeBase.h"
#include "BoneContainer.h"
#include "Animation/AnimNodeBase.h"
#include "AxisSettings.h"
#include "BoneRef.h"
#include "AnimMode_OrientationWarpingBL.generated.h"

USTRUCT(BlueprintType)
struct CUSTOMANIMNODE_API FAnimMode_OrientationWarpingBL : public FAnimNode_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FPoseLink BasePose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float LocomotionAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FAxisSettings Settings;
    
    UPROPERTY(EditAnywhere)
    TArray<FBoneRef> SpineBones;
    
    UPROPERTY(EditAnywhere)
    FBoneReference IKFootRootBone;
    
    FAnimMode_OrientationWarpingBL();
};

