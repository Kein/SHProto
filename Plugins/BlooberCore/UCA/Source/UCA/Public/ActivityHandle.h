#pragma once
#include "CoreMinimal.h"
#include "NamedHandle.h"
#include "ActivityHandle.generated.h"

USTRUCT(BlueprintType)
struct UCA_API FActivityHandle : public FNamedHandle {
    GENERATED_BODY()
public:
    FActivityHandle();
};

