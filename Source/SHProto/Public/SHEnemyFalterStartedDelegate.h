#pragma once
#include "CoreMinimal.h"
#include "SHEnemyFalterStartedDelegate.generated.h"

class USHEnemyAnimComponent;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSHEnemyFalterStarted, USHEnemyAnimComponent*, EnemyAnimComponent);

