#pragma once
#include "CoreMinimal.h"
#include "EAchievementCounterType.generated.h"

UENUM()
enum class EAchievementCounterType : int32 {
    Simple,
    Integer,
    Float,
    Collection,
};

