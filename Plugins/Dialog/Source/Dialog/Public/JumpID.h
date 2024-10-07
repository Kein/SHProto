#pragma once
#include "CoreMinimal.h"
#include "DialogObjectID.h"
#include "JumpID.generated.h"

USTRUCT(BlueprintType)
struct DIALOG_API FJumpID : public FDialogObjectID {
    GENERATED_BODY()
public:
    FJumpID();
};

