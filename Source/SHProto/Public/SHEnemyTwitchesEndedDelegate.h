#pragma once
#include "CoreMinimal.h"
#include "SHEnemyTwitchesEndedDelegate.generated.h"

class USHEnemyAnimComponent;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSHEnemyTwitchesEnded, USHEnemyAnimComponent*, EnemyAnimComponent);

