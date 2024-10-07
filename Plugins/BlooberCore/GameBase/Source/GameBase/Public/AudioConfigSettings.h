#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "EAudioProfile.h"
#include "AudioConfigSettings.generated.h"

class UAkRtpc;
class UAkStateValue;
class UAkSwitchValue;

UCLASS(DefaultConfig, Config=Game)
class GAMEBASE_API UAudioConfigSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    TMap<FName, TSoftObjectPtr<UAkRtpc>> VolumeRTPC;
    
    UPROPERTY(Config, EditAnywhere, EditFixedSize)
    TMap<EAudioProfile, TSoftObjectPtr<UAkStateValue>> StateValues;
    
    UPROPERTY(Config, EditAnywhere)
    TMap<FName, TSoftObjectPtr<UAkSwitchValue>> AudioLangChangeSwitchers;
    
    UAudioConfigSettings();

};

