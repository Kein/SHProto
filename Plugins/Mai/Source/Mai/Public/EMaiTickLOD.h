#pragma once
#include "CoreMinimal.h"
#include "EMaiTickLOD.generated.h"

UENUM(BlueprintType)
enum class EMaiTickLOD : uint8 {
    TickLOD0,
    TickLOD1,
    TickLOD2,
    TickLOD3,
    COUNT = TickLOD3,
};

