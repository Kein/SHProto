#pragma once
#include "CoreMinimal.h"
#include "StateFinishedDelegate.generated.h"

class UBeingState;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FStateFinished, UBeingState*, State);

