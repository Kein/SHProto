#pragma once
#include "CoreMinimal.h"
#include "DaiCondition.h"
#include "DaiConditions.h"
#include "CompositeCondition.generated.h"

UCLASS(EditInlineNew)
class DAI_API UCompositeCondition : public UDaiCondition {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FDaiConditions _Conditions;
    
    UCompositeCondition();

};

