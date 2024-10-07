#pragma once
#include "CoreMinimal.h"
#include "MaiAttackBeginDelegate.generated.h"

class AActor;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMaiAttackBegin, AActor*, enemy);

