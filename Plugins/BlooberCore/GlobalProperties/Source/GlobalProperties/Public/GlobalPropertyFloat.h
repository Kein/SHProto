#pragma once
#include "CoreMinimal.h"
#include "GlobalPropertyBase.h"
#include "GlobalPropertyFloat.generated.h"

USTRUCT(BlueprintType)
struct GLOBALPROPERTIES_API FGlobalPropertyFloat : public FGlobalPropertyBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float Value;
    
public:
    FGlobalPropertyFloat();
};

