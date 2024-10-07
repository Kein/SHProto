#pragma once
#include "CoreMinimal.h"
#include "NamedHandle.h"
#include "DLCHandle.generated.h"

USTRUCT(BlueprintType)
struct DLCMANAGER_API FDLCHandle : public FNamedHandle {
    GENERATED_BODY()
public:
    FDLCHandle();
};

