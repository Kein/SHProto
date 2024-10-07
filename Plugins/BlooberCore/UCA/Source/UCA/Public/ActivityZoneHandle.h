#pragma once
#include "CoreMinimal.h"
#include "NamedHandle.h"
#include "ActivityZoneHandle.generated.h"

USTRUCT(BlueprintType)
struct UCA_API FActivityZoneHandle : public FNamedHandle {
    GENERATED_BODY()
public:
    FActivityZoneHandle();
};

