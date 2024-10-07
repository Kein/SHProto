#pragma once
#include "CoreMinimal.h"
#include "GlobalPropertyConfigBase.h"
#include "GlobalPropertyConfigInt.generated.h"

USTRUCT(BlueprintType)
struct GLOBALPROPERTIES_API FGlobalPropertyConfigInt : public FGlobalPropertyConfigBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 DefaultValue;
    
public:
    FGlobalPropertyConfigInt();
};

