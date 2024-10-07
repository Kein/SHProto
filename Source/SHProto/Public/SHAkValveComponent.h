#pragma once
#include "CoreMinimal.h"
#include "SHAkComponent.h"
#include "SHAkValveComponent.generated.h"

class UAkAudioEvent;

UCLASS(ClassGroup=Custom, Within=SHValve, meta=(BlueprintSpawnableComponent))
class SHPROTO_API USHAkValveComponent : public USHAkComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    UAkAudioEvent* ValveStart_AudioEvent;
    
    UPROPERTY(EditDefaultsOnly)
    UAkAudioEvent* ValveStop_AudioEvent;
    
    UPROPERTY(EditDefaultsOnly)
    UAkAudioEvent* ValveFinalPush_AudioEvent;
    
public:
    USHAkValveComponent(const FObjectInitializer& ObjectInitializer);

};

