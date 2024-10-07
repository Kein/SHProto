#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "SHAnimNotifyState.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class SHPROTO_API USHAnimNotifyState : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    float StateDuration;
    
    UPROPERTY(BlueprintReadOnly)
    float StateCurrentTime;
    
    USHAnimNotifyState();

};

