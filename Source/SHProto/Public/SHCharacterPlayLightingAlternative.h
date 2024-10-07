#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "SHCharacterPlayLightingBase.h"
#include "SHCharacterPlayLightingAlternative.generated.h"

UCLASS(Abstract)
class SHPROTO_API ASHCharacterPlayLightingAlternative : public ASHCharacterPlayLightingBase {
    GENERATED_BODY()
public:
    ASHCharacterPlayLightingAlternative(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintImplementableEvent)
    void HandleGlobalIntensityMulUpdated(float CurrentGlobalIntensityMul);
    
    UFUNCTION(BlueprintImplementableEvent)
    void HandleGlobalColorUpdated(FLinearColor InColorOverride);
    
    UFUNCTION(BlueprintImplementableEvent)
    void HandleFlashlightIntensityChanged(float CurrentFlashlightIntensity);
    
    UFUNCTION(BlueprintImplementableEvent)
    void HandleFlashlightColorChanged(FColor CurrentFlashlightColor);
    
    UFUNCTION(BlueprintImplementableEvent)
    void HandleDisableCharacterLightsUpdated(bool CurrentDisableCharacterLightsFlag);
    
};

