#pragma once
#include "CoreMinimal.h"
#include "SHAkComponent.h"
#include "SHAkElevatorFloorDoorComponent.generated.h"

class UAkAudioEvent;
class UAkSwitchValue;
class USceneComponent;

UCLASS(ClassGroup=Custom, Within=SHElevatorFloorDoor, meta=(BlueprintSpawnableComponent))
class SHPROTO_API USHAkElevatorFloorDoorComponent : public USHAkComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    UAkAudioEvent* AudioEvent_ButtonClicked;
    
    UPROPERTY(EditDefaultsOnly)
    UAkAudioEvent* AudioEvent_MoveStarted;
    
    UPROPERTY(EditDefaultsOnly)
    UAkAudioEvent* AudioEvent_MoveFinished;
    
    UPROPERTY(EditDefaultsOnly)
    UAkSwitchValue* AudioSwitch_DoorType;
    
    UPROPERTY(EditDefaultsOnly)
    UAkSwitchValue* AudioSwitch_DoorState_Opened;
    
    UPROPERTY(EditDefaultsOnly)
    UAkSwitchValue* AudioSwitch_DoorState_Middle;
    
    UPROPERTY(EditDefaultsOnly)
    UAkSwitchValue* AudioSwitch_DoorState_Closed;
    
public:
    USHAkElevatorFloorDoorComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void PlayDoorMovementStartAudio();
    
    UFUNCTION(BlueprintCallable)
    void PlayDoorMovementInteruptedAudio();
    
    UFUNCTION(BlueprintCallable)
    void PlayDoorMovementFinishAudio(bool IsDoorOpened);
    
    UFUNCTION(BlueprintCallable)
    void PlayButtonClickAudio(USceneComponent* ButtonClickedLocationSceneComponent);
    
};

