#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PathPointEventDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FPathPointEvent, FVector, Location, int32, areaFlags);

