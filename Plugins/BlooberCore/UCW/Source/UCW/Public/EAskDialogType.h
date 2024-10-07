#pragma once
#include "CoreMinimal.h"
#include "EAskDialogType.generated.h"

UENUM(BlueprintType)
enum class EAskDialogType : uint8 {
    Message,
    YesNo,
    YesNoCancel,
};

