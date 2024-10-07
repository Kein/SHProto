#pragma once
#include "CoreMinimal.h"
#include "SpawnPointData.h"
#include "SpawnPointEventDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSpawnPointEvent, const FSpawnPointData&, Info);

