#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "SHAnimNotifyState_DisableRagDollOutOfLyingCollision.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class SHPROTO_API USHAnimNotifyState_DisableRagDollOutOfLyingCollision : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName BoneChainName;
    
    UPROPERTY(EditAnywhere)
    float BlendOutTime;
    
    UPROPERTY(EditAnywhere)
    float BlendOutCurveBend;
    
    UPROPERTY(EditAnywhere)
    bool bLyingOnBack;
    
    UPROPERTY(EditAnywhere)
    float DisableAboveTopExtensionAlpha;
    
    UPROPERTY(EditAnywhere)
    float DisableAboveBottomExtensionAlpha;
    
    UPROPERTY(EditAnywhere)
    bool bAlwaysDisableRagDollAtEnd;
    
    USHAnimNotifyState_DisableRagDollOutOfLyingCollision();

};

