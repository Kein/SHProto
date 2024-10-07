#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SHFXSwarmSubcompSettings.generated.h"

UCLASS(BlueprintType)
class SHPROTO_API USHFXSwarmSubcompSettings : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool EnableSwarmVolumesVisibility;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float CheckVisibilityDelay;
    
    USHFXSwarmSubcompSettings();

};

