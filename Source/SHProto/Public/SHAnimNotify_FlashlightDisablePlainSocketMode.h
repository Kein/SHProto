#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "SHAnimNotify_FlashlightDisablePlainSocketMode.generated.h"

UCLASS(CollapseCategories)
class SHPROTO_API USHAnimNotify_FlashlightDisablePlainSocketMode : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float BlendTime;
    
    USHAnimNotify_FlashlightDisablePlainSocketMode();

};

