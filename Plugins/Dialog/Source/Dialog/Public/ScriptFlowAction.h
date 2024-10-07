#pragma once
#include "CoreMinimal.h"
#include "FlowAction.h"
#include "ScriptFlowAction.generated.h"

class UObject;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class DIALOG_API UScriptFlowAction : public UFlowAction {
    GENERATED_BODY()
public:
    UScriptFlowAction();

    UFUNCTION(BlueprintNativeEvent)
    FString ScriptToString() const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void ScriptTick(UObject* Context);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ScriptStop(UObject* Context);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ScriptPerform(UObject* Context);
    
};

