#pragma once
#include "CoreMinimal.h"
#include "GlobalPropertyHandleBase.generated.h"

class UGlobalPropertiesSheet;

USTRUCT(BlueprintType)
struct GLOBALPROPERTIES_API FGlobalPropertyHandleBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UGlobalPropertiesSheet* Sheet;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName UniqueName;
    
public:
    FGlobalPropertyHandleBase();
};

