#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SHMaterialPropertyControlData.h"
#include "SHMaterialPropertyControlSettings.generated.h"

UCLASS(BlueprintType)
class SHPROTO_API USHMaterialPropertyControlSettings : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FSHMaterialPropertyControlData> MaterialPropertyControlConfigs;
    
    USHMaterialPropertyControlSettings();

};

