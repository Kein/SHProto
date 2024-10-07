#pragma once
#include "CoreMinimal.h"
#include "EAmmoWidgetVisibility.generated.h"

UENUM(BlueprintType)
enum class EAmmoWidgetVisibility : uint8 {
    Off,
    On,
    Dynamic,
};

