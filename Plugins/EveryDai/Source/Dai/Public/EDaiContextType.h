#pragma once
#include "CoreMinimal.h"
#include "EDaiContextType.generated.h"

UENUM(BlueprintType)
enum class EDaiContextType : uint8 {
    Caller,
    Context,
    Player,
    Reference,
    ByClass,
    ByGameplayTag,
    ByTag,
    ByName,
    CustomGetter,
    CallerAI,
};

