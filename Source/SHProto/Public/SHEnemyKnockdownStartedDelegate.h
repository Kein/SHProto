#pragma once
#include "CoreMinimal.h"
#include "SHEnemyKnockdownStartedDelegate.generated.h"

class USHEnemyAnimComponent;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSHEnemyKnockdownStarted, USHEnemyAnimComponent*, EnemyAnimComponent);

