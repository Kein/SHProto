#pragma once
#include "CoreMinimal.h"
#include "ETagOperation2.generated.h"

UENUM(BlueprintType)
enum class ETagOperation2 : uint8 {
    Add,
    Remove,
    Scope,
};

