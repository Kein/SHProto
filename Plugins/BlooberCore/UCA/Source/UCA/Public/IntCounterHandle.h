#pragma once
#include "CoreMinimal.h"
#include "NamedHandle.h"
#include "IntCounterHandle.generated.h"

USTRUCT(BlueprintType)
struct UCA_API FIntCounterHandle : public FNamedHandle {
    GENERATED_BODY()
public:
    FIntCounterHandle();
};

