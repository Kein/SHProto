#pragma once
#include "CoreMinimal.h"
#include "GlobalPropertyBool.h"
#include "GlobalPropertyFloat.h"
#include "GlobalPropertyInt.h"
#include "GlobalPropertiesSaveData.generated.h"

USTRUCT(BlueprintType)
struct GLOBALPROPERTIES_API FGlobalPropertiesSaveData {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    TArray<FGlobalPropertyBool> Bools;
    
    UPROPERTY()
    TArray<FGlobalPropertyInt> Ints;
    
    UPROPERTY()
    TArray<FGlobalPropertyFloat> Floats;
    
public:
    FGlobalPropertiesSaveData();
};

