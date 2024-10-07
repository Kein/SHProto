#pragma once
#include "CoreMinimal.h"
#include "EMaiTribool.generated.h"

UENUM(BlueprintType)
enum class EMaiTribool : uint8 {
    Unkonown,
    Set,
    Unset,
};

