#pragma once
#include "CoreMinimal.h"
#include "MaiFloatAggroModifier.h"
#include "MaiOutAreaGainMod.generated.h"

UCLASS(EditInlineNew)
class MAI_API UMaiOutAreaGainMod : public UMaiFloatAggroModifier {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    float _OutAreaMul;
    
public:
    UMaiOutAreaGainMod();

};

