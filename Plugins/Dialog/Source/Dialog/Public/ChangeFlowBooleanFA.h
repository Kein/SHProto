#pragma once
#include "CoreMinimal.h"
#include "EBooleanFlowOperation2.h"
#include "FlowAction.h"
#include "FlowBoolean.h"
#include "ChangeFlowBooleanFA.generated.h"

UCLASS(EditInlineNew)
class DIALOG_API UChangeFlowBooleanFA : public UFlowAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FFlowBoolean _FlowGlobalID;
    
    UPROPERTY(EditAnywhere)
    EBooleanFlowOperation2 _Operation;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool _Value;
    
    UChangeFlowBooleanFA();

};

