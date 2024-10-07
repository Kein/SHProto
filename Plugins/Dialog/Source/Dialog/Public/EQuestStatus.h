#pragma once
#include "CoreMinimal.h"
#include "EQuestStatus.generated.h"

UENUM(BlueprintType)
enum class EQuestStatus : uint8 {
    UNKNOWN,
    ACTIVE,
    SUCCESS,
    FAILURE,
    CLOSED,
    COUNT,
};

