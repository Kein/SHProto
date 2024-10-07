#pragma once
#include "CoreMinimal.h"
#include "SHMeatHealthValues.h"
#include "SHHookedMeatBoneworkHandler.generated.h"

USTRUCT(BlueprintType)
struct FSHHookedMeatBoneworkHandler {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TArray<FSHMeatHealthValues> BonesHealthValues;
    
public:
    SHPROTO_API FSHHookedMeatBoneworkHandler();
};

