#pragma once
#include "CoreMinimal.h"
#include "OnPanelChangedEventDelegate.generated.h"

class UWidget;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnPanelChangedEvent, int32, Index, UWidget*, Panel);

