#pragma once
#include "CoreMinimal.h"
#include "BoneContainer.h"
#include "IKBones.generated.h"

USTRUCT(BlueprintType)
struct FIKBones {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FBoneReference IKFootBone;
    
    UPROPERTY(EditAnywhere)
    FBoneReference FKFootBone;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 NumBonesInLimb;
    
    CUSTOMANIMNODE_API FIKBones();
};

