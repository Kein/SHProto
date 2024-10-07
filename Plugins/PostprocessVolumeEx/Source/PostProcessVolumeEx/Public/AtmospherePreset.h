#pragma once
#include "CoreMinimal.h"
#include "AtmospherePreset.generated.h"

USTRUCT(BlueprintType)
struct FAtmospherePreset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName PresetName;
    
    POSTPROCESSVOLUMEEX_API FAtmospherePreset();
};

