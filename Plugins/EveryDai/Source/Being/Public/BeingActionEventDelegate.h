#pragma once
#include "CoreMinimal.h"
#include "EBeingActionEventType.h"
#include "BeingActionEventDelegate.generated.h"

class UBeingAction;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FBeingActionEvent, UBeingAction*, action, EBeingActionEventType, EventType);

