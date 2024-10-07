#pragma once
#include "CoreMinimal.h"
#include "SHFXMaterialModifierSubcomp.h"
#include "SHFXAcidLayerSubcomp.generated.h"

UCLASS(EditInlineNew)
class SHPROTO_API USHFXAcidLayerSubcomp : public USHFXMaterialModifierSubcomp {
    GENERATED_BODY()
public:
    USHFXAcidLayerSubcomp();

    UFUNCTION(BlueprintCallable)
    void RunAcidEffectOnPlayer();
    
    UFUNCTION(BlueprintPure)
    float GetCurrentEvaluateTimer() const;
    
};

