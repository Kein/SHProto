#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "SHAnimNotify_DisableRagDoll.generated.h"

UCLASS(CollapseCategories)
class SHPROTO_API USHAnimNotify_DisableRagDoll : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName BoneChainName;
    
    UPROPERTY(EditAnywhere)
    float BlendOutTime;
    
    UPROPERTY(EditAnywhere)
    float BlendOutCurveBend;
    
    USHAnimNotify_DisableRagDoll();

};

