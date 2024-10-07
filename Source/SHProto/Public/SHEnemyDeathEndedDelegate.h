#pragma once
#include "CoreMinimal.h"
#include "SHEnemyDeathEndedDelegate.generated.h"

class USHEnemyAnimComponent;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSHEnemyDeathEnded, USHEnemyAnimComponent*, EnemyAnimComponent);

