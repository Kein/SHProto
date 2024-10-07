#pragma once
#include "CoreMinimal.h"
#include "ESHAnimEndType.h"
#include "AnimEndEventDelegate.generated.h"

class UAnimMontage;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FAnimEndEvent, UAnimMontage*, Montage, ESHAnimEndType, AnimEndType);

