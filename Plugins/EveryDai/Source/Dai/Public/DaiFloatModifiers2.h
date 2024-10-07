#pragma once
#include "CoreMinimal.h"
#include "DaiFloatModifiers2.generated.h"

class UDaiFloatModifier2;

USTRUCT(BlueprintType)
struct DAI_API FDaiFloatModifiers2 {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    float _BaseValue;
    
    UPROPERTY(EditAnywhere, Instanced)
    TArray<UDaiFloatModifier2*> _List;
    
    FDaiFloatModifiers2();
};

