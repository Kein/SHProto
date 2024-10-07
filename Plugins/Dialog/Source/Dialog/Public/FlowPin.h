#pragma once
#include "CoreMinimal.h"
#include "DialogObjectID.h"
#include "FlowPin.generated.h"

USTRUCT(BlueprintType)
struct FFlowPin {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 _Index;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FDialogObjectID _Reference;
    
    DIALOG_API FFlowPin();
};

