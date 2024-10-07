#pragma once
#include "CoreMinimal.h"
#include "GlobalPropertyConfigBase.generated.h"

class UGlobalPropertiesSheet;

USTRUCT(BlueprintType)
struct GLOBALPROPERTIES_API FGlobalPropertyConfigBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    UGlobalPropertiesSheet* Sheet;
    
    UPROPERTY()
    FName UniqueName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName Name;
    
public:
    FGlobalPropertyConfigBase();
};

