#pragma once
#include "CoreMinimal.h"
#include "AnimStartEventDelegate.generated.h"

class UAnimMontage;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAnimStartEvent, UAnimMontage*, Montage);

