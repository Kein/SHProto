#pragma once
#include "CoreMinimal.h"
#include "DaiCondition.h"
#include "EBooleanFlowOperation.h"
#include "FlowBoolean.h"
#include "BooleanFlowCondition.generated.h"

UCLASS(Abstract, EditInlineNew)
class DIALOG_API UBooleanFlowCondition : public UDaiCondition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    FFlowBoolean _Key;
    
    UPROPERTY(EditAnywhere)
    EBooleanFlowOperation _Operation;
    
public:
    UBooleanFlowCondition();

};

