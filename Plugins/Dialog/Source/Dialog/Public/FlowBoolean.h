#pragma once
#include "CoreMinimal.h"
#include "FlowGlobal.h"
#include "FlowBoolean.generated.h"

USTRUCT(BlueprintType)
struct FFlowBoolean : public FFlowGlobal {
    GENERATED_BODY()
public:
    DIALOG_API FFlowBoolean();
};

