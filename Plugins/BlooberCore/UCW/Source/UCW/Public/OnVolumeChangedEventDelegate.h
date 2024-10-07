#pragma once
#include "CoreMinimal.h"
#include "OnVolumeChangedEventDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnVolumeChangedEvent, float, Volume);

