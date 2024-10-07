#pragma once
#include "CoreMinimal.h"
#include "SHEnemyKnockdownEndedDelegate.generated.h"

class USHEnemyAnimComponent;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSHEnemyKnockdownEnded, USHEnemyAnimComponent*, EnemyAnimComponent);

