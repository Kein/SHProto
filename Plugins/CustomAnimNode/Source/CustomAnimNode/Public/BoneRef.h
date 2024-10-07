#pragma once
#include "CoreMinimal.h"
#include "BoneContainer.h"
#include "BoneRef.generated.h"

USTRUCT()
struct FBoneRef {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FBoneReference bone;
    
    CUSTOMANIMNODE_API FBoneRef();
};

