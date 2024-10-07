#pragma once
#include "CoreMinimal.h"
#include "SHCharacterAudioSubcomponentBase.h"
#include "SHChAudioEnviroSubcomponent.generated.h"

class ASHEnvironmentSwitchVolume;
class UAkSwitchValue;
class USHEnvironmentComponentSettings;

UCLASS(EditInlineNew)
class SHPROTO_API USHChAudioEnviroSubcomponent : public USHCharacterAudioSubcomponentBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    USHEnvironmentComponentSettings* Settings;
    
    UPROPERTY(Transient)
    TArray<ASHEnvironmentSwitchVolume*> EnvironmentVolumes;
    
    UPROPERTY(Transient)
    TSoftObjectPtr<UAkSwitchValue> CurrentPlayingEnvironmentSwitch;
    
public:
    USHChAudioEnviroSubcomponent();

};

