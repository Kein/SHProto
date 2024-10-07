#pragma once
#include "CoreMinimal.h"
#include "SHEnemyStaggerStartedDelegate.generated.h"

class USHEnemyAnimComponent;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSHEnemyStaggerStarted, USHEnemyAnimComponent*, EnemyAnimComponent);

