#pragma once
#include "CoreMinimal.h"
#include "GlobalPropertyBase.generated.h"

USTRUCT(BlueprintType)
struct GLOBALPROPERTIES_API FGlobalPropertyBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName UniqueName;
    
public:
    FGlobalPropertyBase();
};

