#pragma once
#include "CoreMinimal.h"
#include "MaiAttackEndDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMaiAttackEnd, bool, Aborted);

