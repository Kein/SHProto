#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "EKnockDownState.h"
#include "SHAnimNotify_KnockdownChangeState.generated.h"

UCLASS(CollapseCategories)
class SHPROTO_API USHAnimNotify_KnockdownChangeState : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EKnockDownState KnockDownState;
    
    USHAnimNotify_KnockdownChangeState();

};

