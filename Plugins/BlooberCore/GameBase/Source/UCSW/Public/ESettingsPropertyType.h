#pragma once
#include "CoreMinimal.h"
#include "ESettingsPropertyType.generated.h"

UENUM()
enum class ESettingsPropertyType : int8 {
    Custom,
    Bool,
    Int,
    Float,
    Enum,
    Volume,
    KeyBind,
};

