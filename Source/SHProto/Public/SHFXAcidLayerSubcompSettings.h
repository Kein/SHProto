#pragma once
#include "CoreMinimal.h"
#include "SHFXMaterialModifierSubcompSettings.h"
#include "SHFXAcidLayerSubcompSettings.generated.h"

class UAkAudioEvent;
class UCurveFloat;

UCLASS()
class SHPROTO_API USHFXAcidLayerSubcompSettings : public USHFXMaterialModifierSubcompSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool EnableAcidLayer;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UCurveFloat* AcidCurve;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float DurationTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAkAudioEvent* AcidAudioEvent;
    
    USHFXAcidLayerSubcompSettings();

};

