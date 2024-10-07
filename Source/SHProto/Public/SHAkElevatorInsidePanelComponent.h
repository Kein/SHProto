#pragma once
#include "CoreMinimal.h"
#include "SHAkComponent.h"
#include "SHAkElevatorInsidePanelComponent.generated.h"

class UAkAudioEvent;

UCLASS(ClassGroup=Custom, Within=SHElevatorInsidePanel, meta=(BlueprintSpawnableComponent))
class SHPROTO_API USHAkElevatorInsidePanelComponent : public USHAkComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    UAkAudioEvent* AudioEvent_ButtonClicked;
    
public:
    USHAkElevatorInsidePanelComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void PlayButtonClickAudio();
    
};

