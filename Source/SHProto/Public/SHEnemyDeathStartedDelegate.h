#pragma once
#include "CoreMinimal.h"
#include "SHEnemyDeathStartedDelegate.generated.h"

class USHEnemyAnimComponent;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSHEnemyDeathStarted, USHEnemyAnimComponent*, EnemyAnimComponent);

