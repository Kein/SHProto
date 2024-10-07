#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SHAudioSpaceSettings.generated.h"

class UAkRtpc;
class UAkStateValue;
class UAkSwitchValue;

UCLASS()
class SHPROTO_API USHAudioSpaceSettings : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    UAkSwitchValue* AudioSwitch_Cubature_Indoor_Small;
    
    UPROPERTY(EditDefaultsOnly)
    UAkSwitchValue* AudioSwitch_Cubature_Indoor_Medium;
    
    UPROPERTY(EditDefaultsOnly)
    UAkSwitchValue* AudioSwitch_Cubature_Indoor_Large;
    
    UPROPERTY(EditDefaultsOnly)
    UAkSwitchValue* AudioSwitch_Cubature_Outdoor;
    
    UPROPERTY(EditDefaultsOnly)
    UAkStateValue* AudioState_World_FW;
    
    UPROPERTY(EditDefaultsOnly)
    UAkStateValue* AudioState_World_OW;
    
    UPROPERTY(EditDefaultsOnly)
    UAkRtpc* AudioRTPC_World;
    
    USHAudioSpaceSettings();

};

