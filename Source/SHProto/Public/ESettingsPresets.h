#pragma once
#include "CoreMinimal.h"
#include "ESettingsPresets.generated.h"

UENUM(BlueprintType)
enum class ESettingsPresets : uint8 {
    Custom,
    Modern,
    Default,
    Retro,
};

