#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EAimAssistMagnetismMode.h"
#include "SHRangedAutoAimConfigurationData.h"
#include "SHRangedAutoAimCmbSubcompSettings.generated.h"

UCLASS(BlueprintType)
class SHPROTO_API USHRangedAutoAimCmbSubcompSettings : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<EAimAssistMagnetismMode, FSHRangedAutoAimConfigurationData> ModeToConfigurationMapping;
    
    USHRangedAutoAimCmbSubcompSettings();

};

