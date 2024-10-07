#pragma once
#include "CoreMinimal.h"
#include "GlobalPropertyHandleBase.h"
#include "GlobalPropertyHandleFloat.generated.h"

USTRUCT(BlueprintType)
struct GLOBALPROPERTIES_API FGlobalPropertyHandleFloat : public FGlobalPropertyHandleBase {
    GENERATED_BODY()
public:
    FGlobalPropertyHandleFloat();
};

