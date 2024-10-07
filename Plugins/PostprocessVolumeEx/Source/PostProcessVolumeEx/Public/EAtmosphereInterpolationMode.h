#pragma once
#include "CoreMinimal.h"
#include "EAtmosphereInterpolationMode.generated.h"

UENUM(BlueprintType)
enum EAtmosphereInterpolationMode {
    EAIM_FromParameter,
    EAIM_LeaveSource,
    EAIM_LeaveTarget,
};

