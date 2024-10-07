#pragma once
#include "CoreMinimal.h"
#include "NamedHandle.h"
#include "CounterHandle.generated.h"

USTRUCT(BlueprintType)
struct UCA_API FCounterHandle : public FNamedHandle {
    GENERATED_BODY()
public:
    FCounterHandle();
};

