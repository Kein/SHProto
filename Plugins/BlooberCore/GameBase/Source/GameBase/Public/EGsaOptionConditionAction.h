#pragma once
#include "CoreMinimal.h"
#include "EGsaOptionConditionAction.generated.h"

UENUM()
enum class EGsaOptionConditionAction : int8 {
    Enable,
    Disable,
    Visible,
    Hidden,
    Active,
    Inative,
    Custom,
};

