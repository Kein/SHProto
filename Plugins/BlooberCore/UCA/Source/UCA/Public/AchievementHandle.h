#pragma once
#include "CoreMinimal.h"
#include "NamedHandle.h"
#include "AchievementHandle.generated.h"

USTRUCT(BlueprintType)
struct UCA_API FAchievementHandle : public FNamedHandle {
    GENERATED_BODY()
public:
    FAchievementHandle();
};

