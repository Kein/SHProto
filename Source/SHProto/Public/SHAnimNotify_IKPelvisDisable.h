#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "SHAnimNotify_IKPelvisDisable.generated.h"

UCLASS(CollapseCategories)
class SHPROTO_API USHAnimNotify_IKPelvisDisable : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float interpSpeed;
    
    USHAnimNotify_IKPelvisDisable();

};

