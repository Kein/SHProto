#pragma once
#include "CoreMinimal.h"
#include "EAimAssistMagnetismMode.generated.h"

UENUM(BlueprintType)
enum class EAimAssistMagnetismMode : uint8 {
    Off,
    Low,
    Medium,
    High,
};

