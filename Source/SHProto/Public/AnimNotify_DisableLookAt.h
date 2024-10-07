#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "AnimNotify_DisableLookAt.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class SHPROTO_API UAnimNotify_DisableLookAt : public UAnimNotifyState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float LookAtAlphaBlendInSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float LookAtAlphaBlendOutSpeed;
    
public:
    UAnimNotify_DisableLookAt();

};

