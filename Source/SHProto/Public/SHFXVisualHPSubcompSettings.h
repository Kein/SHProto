#pragma once
#include "CoreMinimal.h"
#include "SHFXMaterialModifierSubcompSettings.h"
#include "SHFXVisualHPSubcompSettings.generated.h"

class UCurveFloat;

UCLASS()
class SHPROTO_API USHFXVisualHPSubcompSettings : public USHFXMaterialModifierSubcompSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool EnableHPVisual;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UCurveFloat* HPVisualCurve;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float HPVisualNormalFactor;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float HPVisualReviveFactor;
    
    USHFXVisualHPSubcompSettings();

};

