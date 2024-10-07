#pragma once
#include "CoreMinimal.h"
#include "EStateStatus.h"
#include "StateStatusChangedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FStateStatusChanged, EStateStatus, Status);

