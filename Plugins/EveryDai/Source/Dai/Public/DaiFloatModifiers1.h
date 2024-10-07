#pragma once
#include "CoreMinimal.h"
#include "DaiFloatModifiers1.generated.h"

class UDaiFloatModifier1;

USTRUCT(BlueprintType)
struct DAI_API FDaiFloatModifiers1 {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    float _BaseValue;
    
    UPROPERTY(EditAnywhere, Instanced)
    TArray<UDaiFloatModifier1*> _List;
    
    FDaiFloatModifiers1();
};

