#pragma once
#include "CoreMinimal.h"
#include "DaiFloatModifiers.generated.h"

class UDaiFloatModifier;

USTRUCT(BlueprintType)
struct DAI_API FDaiFloatModifiers {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    float _BaseValue;
    
    UPROPERTY(EditAnywhere, Instanced)
    TArray<UDaiFloatModifier*> _List;
    
    FDaiFloatModifiers();
};

