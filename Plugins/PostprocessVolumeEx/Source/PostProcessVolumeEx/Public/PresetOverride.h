#pragma once
#include "CoreMinimal.h"
#include "PresetOverride.generated.h"

USTRUCT(BlueprintType)
struct FPresetOverride {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName PresetName;
    
    POSTPROCESSVOLUMEEX_API FPresetOverride();
};

