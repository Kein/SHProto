#pragma once
#include "CoreMinimal.h"
#include "GlobalPropertyConfigBase.h"
#include "GlobalPropertyConfigBool.generated.h"

USTRUCT(BlueprintType)
struct GLOBALPROPERTIES_API FGlobalPropertyConfigBool : public FGlobalPropertyConfigBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool DefaultValue;
    
public:
    FGlobalPropertyConfigBool();
};

