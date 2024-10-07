#pragma once
#include "CoreMinimal.h"
#include "OnActiveIndexChangedEventDelegate.generated.h"

class UWidget;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnActiveIndexChangedEvent, UWidget*, ActiveWidget, int32, ActiveWidgetIndex);

