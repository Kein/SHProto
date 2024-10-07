#pragma once
#include "CoreMinimal.h"
#include "SkipWidgetTickEventDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSkipWidgetTickEvent, float, dt);

