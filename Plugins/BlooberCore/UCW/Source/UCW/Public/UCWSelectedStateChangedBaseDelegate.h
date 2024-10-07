#pragma once
#include "CoreMinimal.h"
#include "UCWSelectedStateChangedBaseDelegate.generated.h"

class UUCWButtonBase;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FUCWSelectedStateChangedBase, UUCWButtonBase*, Button, bool, Selected);

