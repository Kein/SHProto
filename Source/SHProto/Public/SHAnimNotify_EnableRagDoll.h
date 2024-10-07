#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "SHAnimNotify_EnableRagDoll.generated.h"

UCLASS(CollapseCategories)
class SHPROTO_API USHAnimNotify_EnableRagDoll : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName BoneChainName;
    
    UPROPERTY(EditAnywhere)
    bool bRagDollIsOptionalWhenReducingPhysicsUse;
    
    USHAnimNotify_EnableRagDoll();

};

