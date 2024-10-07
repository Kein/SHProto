#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "SHAnimNotify_FadeOutBonePhysics.generated.h"

UCLASS(CollapseCategories)
class SHPROTO_API USHAnimNotify_FadeOutBonePhysics : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float BlendOutTime;
    
    UPROPERTY(EditAnywhere)
    float BlendOutCurveBend;
    
    UPROPERTY(EditAnywhere)
    FName PhysicsIdentifier;
    
    USHAnimNotify_FadeOutBonePhysics();

};

