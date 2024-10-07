#pragma once
#include "CoreMinimal.h"
#include "DialogObjectID.h"
#include "ConditionID.generated.h"

USTRUCT(BlueprintType)
struct DIALOG_API FConditionID : public FDialogObjectID {
    GENERATED_BODY()
public:
    FConditionID();
};

