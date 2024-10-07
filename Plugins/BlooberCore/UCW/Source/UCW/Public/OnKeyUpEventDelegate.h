#pragma once
#include "CoreMinimal.h"
#include "Input/Events.h"
#include "OnKeyUpEventDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnKeyUpEvent, const FKeyEvent&, InKeyEvent);

