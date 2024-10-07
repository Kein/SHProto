#pragma once
#include "CoreMinimal.h"
#include "MaiLightingStateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMaiLightingState, bool, On);

