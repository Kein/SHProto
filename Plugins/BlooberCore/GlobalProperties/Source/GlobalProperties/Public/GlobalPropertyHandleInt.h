#pragma once
#include "CoreMinimal.h"
#include "GlobalPropertyHandleBase.h"
#include "GlobalPropertyHandleInt.generated.h"

USTRUCT(BlueprintType)
struct GLOBALPROPERTIES_API FGlobalPropertyHandleInt : public FGlobalPropertyHandleBase {
    GENERATED_BODY()
public:
    FGlobalPropertyHandleInt();
};

