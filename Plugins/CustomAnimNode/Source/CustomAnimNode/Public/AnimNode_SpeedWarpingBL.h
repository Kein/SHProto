#pragma once
#include "CoreMinimal.h"
#include "BoneControllers/AnimNode_SkeletalControlBase.h"
#include "BoneContainer.h"
#include "EIKFootRootLocalAxis.h"
#include "IKBones.h"
#include "PelvisAdjustmentInterp.h"
#include "AnimNode_SpeedWarpingBL.generated.h"

USTRUCT(BlueprintType)
struct CUSTOMANIMNODE_API FAnimNode_SpeedWarpingBL : public FAnimNode_SkeletalControlBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FBoneReference IKFootRootBone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FIKBones> FeetDefinitions;
    
    UPROPERTY(EditAnywhere)
    FBoneReference PelvisBone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EIKFootRootLocalAxis SpeedWarpingAxisMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SpeedScaling;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PelvisAdjustmentAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxIter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FPelvisAdjustmentInterp PelvisAdjustmentInterp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool ClampIKUsingFKLeg;
    
    FAnimNode_SpeedWarpingBL();
};

