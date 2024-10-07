#pragma once
#include "CoreMinimal.h"
#include "MaiEnemyChangeDelegate.generated.h"

class AActor;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMaiEnemyChange, AActor*, enemy);

