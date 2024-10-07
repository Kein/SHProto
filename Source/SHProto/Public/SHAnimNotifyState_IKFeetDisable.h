#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "SHAnimNotifyState_IKFeetDisable.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class SHPROTO_API USHAnimNotifyState_IKFeetDisable : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float interpSpeed;
    
    USHAnimNotifyState_IKFeetDisable();

};

