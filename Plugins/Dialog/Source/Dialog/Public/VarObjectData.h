#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "FlowID.h"
#include "VarObjectData.generated.h"

class UFlowAction;

UCLASS(BlueprintType, EditInlineNew)
class DIALOG_API UVarObjectData : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY()
    FFlowID _FlowID;
    
protected:
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, Instanced, VisibleAnywhere)
    TArray<UFlowAction*> _Actions;
    
public:
    UVarObjectData();

};

