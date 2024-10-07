#pragma once
#include "CoreMinimal.h"
#include "EKnockDownState.h"
#include "SHAnimSubcomponentBase.h"
#include "SHAnimKnockDownSubcomp.generated.h"

UCLASS(BlueprintType, EditInlineNew)
class SHPROTO_API USHAnimKnockDownSubcomp : public USHAnimSubcomponentBase {
    GENERATED_BODY()
public:
    USHAnimKnockDownSubcomp();

    UFUNCTION(BlueprintCallable)
    void SetKnockDownState(EKnockDownState NewKnockDownState);
    
    UFUNCTION(BlueprintPure)
    EKnockDownState GetKnockDownState();
    
};

