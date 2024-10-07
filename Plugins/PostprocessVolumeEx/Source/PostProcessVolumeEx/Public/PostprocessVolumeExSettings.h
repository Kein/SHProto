#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DeveloperSettings.h"
#include "PostprocessVolumeExSettings.generated.h"

UCLASS(DefaultConfig, Config=Game)
class POSTPROCESSVOLUMEEX_API UPostprocessVolumeExSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    FSoftObjectPath AtmospheresDatatable;
    
    UPROPERTY(Config, EditAnywhere)
    FSoftObjectPath PresetsOverridesDatatable;
    
    UPostprocessVolumeExSettings();

};

