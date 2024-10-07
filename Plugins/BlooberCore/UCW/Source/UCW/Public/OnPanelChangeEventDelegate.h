#pragma once
#include "CoreMinimal.h"
#include "OnPanelChangeEventDelegate.generated.h"

class UWidget;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnPanelChangeEvent, int32, Index, UWidget*, Panel);

