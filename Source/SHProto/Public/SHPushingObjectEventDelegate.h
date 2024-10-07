#pragma once
#include "CoreMinimal.h"
#include "SHPushingObjectEventDelegate.generated.h"

class USHPushingObjectAnimInstance;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSHPushingObjectEvent, USHPushingObjectAnimInstance*, AnimInst);

