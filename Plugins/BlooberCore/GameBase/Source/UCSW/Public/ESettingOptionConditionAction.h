#pragma once
#include "CoreMinimal.h"
#include "ESettingOptionConditionAction.generated.h"

UENUM()
enum class ESettingOptionConditionAction : int8 {
    Enable,
    Disable,
    Visible,
    Hidden,
    Active,
    Inactive,
    Custom,
    Preset,
    QualityValue,
};

