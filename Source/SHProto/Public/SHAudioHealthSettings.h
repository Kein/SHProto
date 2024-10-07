#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SHAudioHealthSettings.generated.h"

class UAkAudioEvent;
class UAkRtpc;
class UAkStateValue;

UCLASS()
class SHPROTO_API USHAudioHealthSettings : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    UAkAudioEvent* ReceivedDamageEvent_Generic;
    
    UPROPERTY(EditDefaultsOnly)
    UAkAudioEvent* Play_CriticalInjuryEvent;
    
    UPROPERTY(EditDefaultsOnly)
    UAkAudioEvent* Stop_CriticalInjuryEvent;
    
    UPROPERTY(EditDefaultsOnly)
    UAkRtpc* RTPC_HealthPercentage;
    
    UPROPERTY(EditDefaultsOnly)
    UAkStateValue* AudioHealthState_Fine;
    
    UPROPERTY(EditDefaultsOnly)
    UAkStateValue* AudioHealthState_LowInjury;
    
    UPROPERTY(EditDefaultsOnly)
    UAkStateValue* AudioHealthState_HeavyInjury;
    
    UPROPERTY(EditDefaultsOnly)
    UAkStateValue* AudioHealthState_CriticalInjury;
    
    UPROPERTY(EditDefaultsOnly)
    UAkStateValue* AudioHealthState_Dead;
    
    USHAudioHealthSettings();

};

