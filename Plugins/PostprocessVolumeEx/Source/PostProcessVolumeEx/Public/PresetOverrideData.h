#pragma once
#include "CoreMinimal.h"
#include "Engine/Scene.h"
#include "Engine/DataTable.h"
#include "PresetOverrideData.generated.h"

USTRUCT(BlueprintType)
struct FPresetOverrideData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FPostProcessSettings Settings;
    
    POSTPROCESSVOLUMEEX_API FPresetOverrideData();
};

