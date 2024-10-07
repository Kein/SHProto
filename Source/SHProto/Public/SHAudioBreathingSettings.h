#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SHAudioBreathingSettings.generated.h"

class UAkAudioEvent;

UCLASS()
class SHPROTO_API USHAudioBreathingSettings : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    UAkAudioEvent* PlayBreathingEvent;
    
    UPROPERTY(EditDefaultsOnly)
    UAkAudioEvent* StopBreathingEvent;
    
    USHAudioBreathingSettings();

};

