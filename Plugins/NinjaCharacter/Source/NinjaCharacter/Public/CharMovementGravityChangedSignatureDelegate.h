#pragma once
#include "CoreMinimal.h"
#include "ENinjaGravityDirectionMode.h"
#include "CharMovementGravityChangedSignatureDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FCharMovementGravityChangedSignature, ENinjaGravityDirectionMode, OldGravityDirectionMode, ENinjaGravityDirectionMode, CurrentGravityDirectionMode);

