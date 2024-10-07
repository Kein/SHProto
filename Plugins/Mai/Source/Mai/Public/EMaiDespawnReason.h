#pragma once
#include "CoreMinimal.h"
#include "EMaiDespawnReason.generated.h"

UENUM(BlueprintType)
enum class EMaiDespawnReason : uint8 {
    None,
    OnSpawnAreaExit,
    OnSpawnerDeactivate,
    OnSpawnerUnload,
    OnFloorUnload,
};

