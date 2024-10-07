#pragma once
#include "CoreMinimal.h"
#include "DaiCondition.h"
#include "EIntegerFlowOperation.h"
#include "FlowInteger.h"
#include "IntegerFlowCondition.generated.h"

UCLASS(Abstract, EditInlineNew)
class DIALOG_API UIntegerFlowCondition : public UDaiCondition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    FFlowInteger _Key;
    
    UPROPERTY(EditAnywhere)
    EIntegerFlowOperation _Operation;
    
    UPROPERTY(EditAnywhere)
    int32 _Value;
    
public:
    UIntegerFlowCondition();

};

