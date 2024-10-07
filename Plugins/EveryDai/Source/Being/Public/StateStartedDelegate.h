#pragma once
#include "CoreMinimal.h"
#include "StateStartedDelegate.generated.h"

class UBeingState;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FStateStarted, UBeingState*, State);

