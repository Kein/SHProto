#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "EKnockDownState.h"
#include "SHAnimNState_KnockdownState.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class SHPROTO_API USHAnimNState_KnockdownState : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EKnockDownState KnockDownState;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EKnockDownState KnockDownStateOnExit;
    
    USHAnimNState_KnockdownState();

};

