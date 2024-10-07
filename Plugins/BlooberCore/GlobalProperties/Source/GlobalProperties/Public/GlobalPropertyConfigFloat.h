#pragma once
#include "CoreMinimal.h"
#include "GlobalPropertyConfigBase.h"
#include "GlobalPropertyConfigFloat.generated.h"

USTRUCT(BlueprintType)
struct GLOBALPROPERTIES_API FGlobalPropertyConfigFloat : public FGlobalPropertyConfigBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float DefaultValue;
    
public:
    FGlobalPropertyConfigFloat();
};

