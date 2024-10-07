#pragma once
#include "CoreMinimal.h"
#include "GlobalPropertyHandleBase.h"
#include "GlobalPropertyHandleBool.generated.h"

USTRUCT(BlueprintType)
struct GLOBALPROPERTIES_API FGlobalPropertyHandleBool : public FGlobalPropertyHandleBase {
    GENERATED_BODY()
public:
    FGlobalPropertyHandleBool();
};

