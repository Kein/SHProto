#pragma once
#include "CoreMinimal.h"
#include "MaiLightStateChangeDelegate.generated.h"

class UMaiLightEmitter;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMaiLightStateChange, UMaiLightEmitter*, Light);

