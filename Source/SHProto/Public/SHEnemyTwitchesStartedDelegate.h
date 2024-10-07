#pragma once
#include "CoreMinimal.h"
#include "SHEnemyTwitchesStartedDelegate.generated.h"

class USHEnemyAnimComponent;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSHEnemyTwitchesStarted, USHEnemyAnimComponent*, EnemyAnimComponent);

