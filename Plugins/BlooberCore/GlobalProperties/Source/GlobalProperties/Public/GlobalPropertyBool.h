#pragma once
#include "CoreMinimal.h"
#include "GlobalPropertyBase.h"
#include "GlobalPropertyBool.generated.h"

USTRUCT(BlueprintType)
struct GLOBALPROPERTIES_API FGlobalPropertyBool : public FGlobalPropertyBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool Value;
    
public:
    FGlobalPropertyBool();
};

