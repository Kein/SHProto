#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SHSwitchesPrioritiesEnviromentData.h"
#include "SHEnvironmentComponentSettings.generated.h"

class UAkAudioEvent;
class UAkSwitchValue;

UCLASS(BlueprintType)
class SHPROTO_API USHEnvironmentComponentSettings : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FSHSwitchesPrioritiesEnviromentData> SwitchesPrioritiesData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAkSwitchValue* EnviromentSwitchNone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAkAudioEvent* AudioEvent_PlayEnvironment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAkAudioEvent* AudioEvent_StopEnvironment;
    
    USHEnvironmentComponentSettings();

};

