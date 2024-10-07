#pragma once
#include "CoreMinimal.h"
#include "SHEnemyFalterEndedDelegate.generated.h"

class USHEnemyAnimComponent;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSHEnemyFalterEnded, USHEnemyAnimComponent*, EnemyAnimComponent);

