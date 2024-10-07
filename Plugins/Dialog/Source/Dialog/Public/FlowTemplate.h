#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GraphObject.h"
#include "FlowTemplate.generated.h"

class UFlowItem;
class UFlowTask;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class DIALOG_API UFlowTemplate : public UGraphObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FColor _Color;
    
    UFlowTemplate();

    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveDeactivation(UFlowTask* Task);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveActivation(UFlowTask* Task);
    
    UFUNCTION(BlueprintPure)
    UFlowItem* GetOwner() const;
    
};

