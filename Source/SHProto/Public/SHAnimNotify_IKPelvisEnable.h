#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "SHAnimNotify_IKPelvisEnable.generated.h"

UCLASS(CollapseCategories)
class SHPROTO_API USHAnimNotify_IKPelvisEnable : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float interpSpeed;
    
    USHAnimNotify_IKPelvisEnable();

};

