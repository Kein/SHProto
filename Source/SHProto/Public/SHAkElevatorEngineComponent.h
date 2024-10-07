#pragma once
#include "CoreMinimal.h"
#include "SHAkComponent.h"
#include "SHAkElevatorEngineComponent.generated.h"

class UAkAudioEvent;
class UAkSwitchValue;

UCLASS(ClassGroup=Custom, Within=SHElevatorEngine, meta=(BlueprintSpawnableComponent))
class SHPROTO_API USHAkElevatorEngineComponent : public USHAkComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    UAkAudioEvent* AudioEvent_MoveStarted;
    
    UPROPERTY(EditDefaultsOnly)
    UAkAudioEvent* AudioEvent_MoveFinished;
    
    UPROPERTY(EditDefaultsOnly)
    UAkSwitchValue* AudioSwitch_ElevatorType;
    
public:
    USHAkElevatorEngineComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void PlayMoveStartAudio();
    
    UFUNCTION(BlueprintCallable)
    void PlayMoveFinishAudio();
    
};

