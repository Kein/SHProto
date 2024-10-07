#pragma once
#include "CoreMinimal.h"
#include "DialogObjectID.h"
#include "FlowExtItem.h"
#include "FlowReference.generated.h"

UCLASS(EditInlineNew)
class DIALOG_API UFlowReference : public UFlowExtItem {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FDialogObjectID _Target;
    
    UFlowReference();

};

