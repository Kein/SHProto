#pragma once
#include "CoreMinimal.h"
#include "GlobalPropertyBase.h"
#include "GlobalPropertyInt.generated.h"

USTRUCT(BlueprintType)
struct GLOBALPROPERTIES_API FGlobalPropertyInt : public FGlobalPropertyBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 Value;
    
public:
    FGlobalPropertyInt();
};

