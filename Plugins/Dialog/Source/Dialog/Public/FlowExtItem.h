#pragma once
#include "CoreMinimal.h"
#include "FlowItem.h"
#include "FlowText.h"
#include "FlowExtItem.generated.h"

UCLASS(Abstract, EditInlineNew)
class DIALOG_API UFlowExtItem : public UFlowItem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    FString _Name;
    
    UPROPERTY()
    FString _Description;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FFlowText _LocName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FFlowText _LocDescription;
    
public:
    UFlowExtItem();

};

