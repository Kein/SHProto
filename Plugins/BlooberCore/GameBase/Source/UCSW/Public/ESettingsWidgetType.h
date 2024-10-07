#pragma once
#include "CoreMinimal.h"
#include "ESettingsWidgetType.generated.h"

UENUM()
enum class ESettingsWidgetType : int8 {
    Spiner,
    CheckBox,
    Slider,
    Custom,
    VolumeControl,
};

