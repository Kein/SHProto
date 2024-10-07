#pragma once
#include "CoreMinimal.h"
#include "SHFXMaterialModifierSubcomp.h"
#include "SHFXVisualHPSubcomp.generated.h"

class USHCharacterPlayHealthComponent;

UCLASS(EditInlineNew)
class SHPROTO_API USHFXVisualHPSubcomp : public USHFXMaterialModifierSubcomp {
    GENERATED_BODY()
public:
    USHFXVisualHPSubcomp();

protected:
    UFUNCTION()
    void ProcessHealthChangedAsPlayer(USHCharacterPlayHealthComponent* InHealthComponent);
    
    UFUNCTION()
    void ProcessHealthChangedAsAICharacter(int32 prevHealth);
    
public:
    UFUNCTION(BlueprintPure)
    float GetOwnerHealthPercentage() const;
    
    UFUNCTION(BlueprintPure)
    float GetCurrentErodeParameterValue() const;
    
    UFUNCTION(BlueprintPure)
    float GetCurrentCurveEvaluationValue() const;
    
};

