#pragma once
#include "CoreMinimal.h"
#include "DialogObjectID.h"
#include "FlowExtItem.h"
#include "FlowJump.generated.h"

UCLASS(EditInlineNew)
class DIALOG_API UFlowJump : public UFlowExtItem {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FDialogObjectID _Target;
    
    UFlowJump();

};

