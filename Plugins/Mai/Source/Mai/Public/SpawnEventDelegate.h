#pragma once
#include "CoreMinimal.h"
#include "SpawnEventDelegate.generated.h"

class AActor;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSpawnEvent, AActor*, Actor);

