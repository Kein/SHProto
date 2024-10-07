#pragma once
#include "CoreMinimal.h"
#include "SHAkComponent.h"
#include "SHPushableAudioComponent.generated.h"

class UAkAudioEvent;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SHPROTO_API USHPushableAudioComponent : public USHAkComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    UAkAudioEvent* GrabSoundEvent;
    
    UPROPERTY(EditDefaultsOnly)
    UAkAudioEvent* ReleaseSoundEvent;
    
    UPROPERTY(EditDefaultsOnly)
    UAkAudioEvent* StartPushSoundEvent;
    
    UPROPERTY(EditDefaultsOnly)
    UAkAudioEvent* StopPushSoundEvent;
    
public:
    USHPushableAudioComponent(const FObjectInitializer& ObjectInitializer);

};

