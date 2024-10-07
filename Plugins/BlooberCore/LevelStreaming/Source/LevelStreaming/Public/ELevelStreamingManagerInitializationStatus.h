#pragma once
#include "CoreMinimal.h"
#include "ELevelStreamingManagerInitializationStatus.generated.h"

UENUM(BlueprintType)
enum class ELevelStreamingManagerInitializationStatus : uint8 {
    NotInitialized,
    InitializedPartially,
    Initialized,
};

