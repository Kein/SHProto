#pragma once
#include "CoreMinimal.h"
#include "OnMutedChangedEventDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMutedChangedEvent, bool, Muted);

