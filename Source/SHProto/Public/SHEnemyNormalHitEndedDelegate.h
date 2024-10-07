#pragma once
#include "CoreMinimal.h"
#include "SHEnemyNormalHitEndedDelegate.generated.h"

class USHEnemyAnimComponent;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSHEnemyNormalHitEnded, USHEnemyAnimComponent*, EnemyAnimComponent);

