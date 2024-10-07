#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "SHAnimNotifyState_EnableRagDollInLyingCollision.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class SHPROTO_API USHAnimNotifyState_EnableRagDollInLyingCollision : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName BoneChainName;
    
    UPROPERTY(EditAnywhere)
    bool bLyingOnBack;
    
    UPROPERTY(EditAnywhere)
    float EnableBelowTopExtensionAlpha;
    
    UPROPERTY(EditAnywhere)
    float EnableBelowBottomExtensionAlpha;
    
    UPROPERTY(EditAnywhere)
    bool bAlwaysEnableRagDollAtEnd;
    
    UPROPERTY(EditAnywhere)
    bool bRagDollIsOptionalWhenReducingPhysicsUse;
    
    USHAnimNotifyState_EnableRagDollInLyingCollision();

};

