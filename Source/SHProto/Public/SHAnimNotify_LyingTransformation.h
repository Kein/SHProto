#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "SHAnimNotify_LyingTransformation.generated.h"

UCLASS(CollapseCategories)
class SHPROTO_API USHAnimNotify_LyingTransformation : public UAnimNotify {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FName TransformationReason;
    
    UPROPERTY(EditAnywhere)
    bool TransformToLying;
    
    UPROPERTY(EditAnywhere)
    float TransformationDuration;
    
    UPROPERTY(EditAnywhere)
    bool AwaitDelayedRootRotation;
    
    UPROPERTY(EditAnywhere)
    bool DisableAIDuringTransformation;
    
    UPROPERTY(EditAnywhere)
    float LyingCapsuleAnchor;
    
    UPROPERTY(EditAnywhere)
    float MaximumCapsuleExtensions;
    
public:
    USHAnimNotify_LyingTransformation();

};

