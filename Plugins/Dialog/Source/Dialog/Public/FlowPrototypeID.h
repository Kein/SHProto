#pragma once
#include "CoreMinimal.h"
#include "FlowID.h"
#include "FlowPrototypeID.generated.h"

USTRUCT(BlueprintType)
struct DIALOG_API FFlowPrototypeID : public FFlowID {
    GENERATED_BODY()
public:
    FFlowPrototypeID();
};

