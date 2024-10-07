#pragma once
#include "CoreMinimal.h"
#include "NamedHandle.h"
#include "FloatCounterHandle.generated.h"

USTRUCT(BlueprintType)
struct UCA_API FFloatCounterHandle : public FNamedHandle {
    GENERATED_BODY()
public:
    FFloatCounterHandle();
};

