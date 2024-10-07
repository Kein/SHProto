#pragma once
#include "CoreMinimal.h"
#include "EConditionMatchType.generated.h"

UENUM(BlueprintType)
enum class EConditionMatchType : uint8 {
    All,
    Any,
};

