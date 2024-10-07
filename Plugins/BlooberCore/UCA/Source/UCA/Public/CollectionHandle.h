#pragma once
#include "CoreMinimal.h"
#include "NamedHandle.h"
#include "CollectionHandle.generated.h"

USTRUCT(BlueprintType)
struct UCA_API FCollectionHandle : public FNamedHandle {
    GENERATED_BODY()
public:
    FCollectionHandle();
};

