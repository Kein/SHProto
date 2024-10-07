#pragma once
#include "CoreMinimal.h"
#include "UCWWidgetGroupDelegateDelegate.generated.h"

class UUCWButtonBase;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FUCWWidgetGroupDelegate, UUCWButtonBase*, AssociatedButton, int32, ButtonIndex);

