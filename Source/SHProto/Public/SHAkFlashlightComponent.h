#pragma once
#include "CoreMinimal.h"
#include "SHAkComponent.h"
#include "SHAkFlashlightComponent.generated.h"

class UAkAudioEvent;
class UAkRtpc;

UCLASS(ClassGroup=Custom, Within=SHFlashlight, meta=(BlueprintSpawnableComponent))
class SHPROTO_API USHAkFlashlightComponent : public USHAkComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    float FlickerOffEventAlphaIntensityThreshold;
    
    UPROPERTY(EditDefaultsOnly)
    float FlickerOnEventAlphaIntensityThreshold;
    
    UPROPERTY(EditDefaultsOnly)
    UAkAudioEvent* AudioEvent_FlashlightOn;
    
    UPROPERTY(EditDefaultsOnly)
    UAkAudioEvent* AudioEvent_FlashlightOff;
    
    UPROPERTY(EditDefaultsOnly)
    UAkAudioEvent* AudioEvent_Flashlight_Flicker_Off;
    
    UPROPERTY(EditDefaultsOnly)
    UAkAudioEvent* AudioEvent_Flashlight_Flicker_On;
    
    UPROPERTY(EditDefaultsOnly)
    UAkAudioEvent* AudioEvent_Flashlight_Flicker_Buzz;
    
    UPROPERTY(EditDefaultsOnly)
    UAkRtpc* RTPC_Flicker_Intensity;
    
public:
    USHAkFlashlightComponent(const FObjectInitializer& ObjectInitializer);

};

