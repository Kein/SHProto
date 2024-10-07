#pragma once
#include "CoreMinimal.h"
#include "SHEnemyStaggerEndedDelegate.generated.h"

class USHEnemyAnimComponent;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSHEnemyStaggerEnded, USHEnemyAnimComponent*, EnemyAnimComponent);

