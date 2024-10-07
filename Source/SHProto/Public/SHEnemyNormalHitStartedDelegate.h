#pragma once
#include "CoreMinimal.h"
#include "SHEnemyNormalHitStartedDelegate.generated.h"

class USHEnemyAnimComponent;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSHEnemyNormalHitStarted, USHEnemyAnimComponent*, EnemyAnimComponent);

