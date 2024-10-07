#pragma once
#include "CoreMinimal.h"
#include "SHFXMaterialModifierSubcompSettings.h"
#include "SHFXDirtLayerSubcompSettings.generated.h"

class UCurveFloat;
class USHMaterialPropertyControlSettings;

UCLASS()
class SHPROTO_API USHFXDirtLayerSubcompSettings : public USHFXMaterialModifierSubcompSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool EnableDirtBlendLayer;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UCurveFloat* DirtBlendCurve;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<USHMaterialPropertyControlSettings*> MaterialIndexToPropertiesMapping;
    
    USHFXDirtLayerSubcompSettings();

};

