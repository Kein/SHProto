#pragma once
#include "CoreMinimal.h"
#include "FlowID.h"
#include "FlowInstanceID.generated.h"

USTRUCT(BlueprintType)
struct DIALOG_API FFlowInstanceID : public FFlowID {
    GENERATED_BODY()
public:
    FFlowInstanceID();
};

