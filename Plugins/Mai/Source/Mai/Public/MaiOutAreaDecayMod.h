#pragma once
#include "CoreMinimal.h"
#include "DaiFloatModifier.h"
#include "MaiOutAreaDecayMod.generated.h"

UCLASS(EditInlineNew)
class MAI_API UMaiOutAreaDecayMod : public UDaiFloatModifier {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    float _OutAreaMul;
    
public:
    UMaiOutAreaDecayMod();

};

