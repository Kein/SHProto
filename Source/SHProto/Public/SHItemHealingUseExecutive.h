#pragma once
#include "CoreMinimal.h"
#include "EffectHandle.h"
#include "SHAnimatedItemUseExecutive.h"
#include "SHItemHealingUseExecutive.generated.h"

UCLASS(Abstract, EditInlineNew)
class SHPROTO_API USHItemHealingUseExecutive : public USHAnimatedItemUseExecutive {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float HealValueToApply;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FEffectHandle SpecialEffectHeal;
    
public:
    USHItemHealingUseExecutive();

};

