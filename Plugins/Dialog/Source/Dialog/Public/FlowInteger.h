#pragma once
#include "CoreMinimal.h"
#include "FlowGlobal.h"
#include "FlowInteger.generated.h"

USTRUCT(BlueprintType)
struct FFlowInteger : public FFlowGlobal {
    GENERATED_BODY()
public:
    DIALOG_API FFlowInteger();
};

