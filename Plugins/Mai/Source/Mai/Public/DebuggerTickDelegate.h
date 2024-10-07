#pragma once
#include "CoreMinimal.h"
#include "DebuggerTickDelegate.generated.h"

class AMaiDebugger;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FDebuggerTick, AMaiDebugger*, debugger, float, DeltaSeconds);

