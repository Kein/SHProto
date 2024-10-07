#pragma once
#include "CoreMinimal.h"
#include "EIntegerFlowOperation2.h"
#include "FlowAction.h"
#include "FlowInteger.h"
#include "ChangeFlowIntegerFA.generated.h"

UCLASS(EditInlineNew)
class DIALOG_API UChangeFlowIntegerFA : public UFlowAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FFlowInteger _FlowGlobalID;
    
    UPROPERTY(EditAnywhere)
    EIntegerFlowOperation2 _Operation;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 _Value;
    
    UChangeFlowIntegerFA();

};

