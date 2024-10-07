#pragma once
#include "CoreMinimal.h"
#include "SHAkDoorBaseComponent.h"
#include "SHAkDoorComponent.generated.h"

class UAkRtpc;
class UAkSwitchValue;
class UObject;
class USHDoorMovementComponent;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SHPROTO_API USHAkDoorComponent : public USHAkDoorBaseComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    UAkRtpc* VelocityRTPCParam;
    
    UPROPERTY(EditDefaultsOnly)
    UAkSwitchValue* DoorMovementStateSwitch_Closed;
    
    UPROPERTY(EditDefaultsOnly)
    UAkSwitchValue* DoorMovementStateSwitch_FakeClose;
    
    UPROPERTY(EditDefaultsOnly)
    UAkSwitchValue* DoorMovementStateSwitch_Interupted;
    
    UPROPERTY(EditDefaultsOnly)
    UAkSwitchValue* DoorMovementStateSwitch_MiddleOpened;
    
    UPROPERTY(EditDefaultsOnly)
    UAkSwitchValue* DoorMovementStateSwitch_Opened;
    
    UPROPERTY(EditInstanceOnly)
    bool bDebugValue;
    
public:
    USHAkDoorComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void RequestBlockAudio(const bool bLock, const UObject* Object);
    
protected:
    UFUNCTION()
    void ProcessOnDoorAngleChanged(USHDoorMovementComponent* MovementComponent);
    
    UFUNCTION()
    void ProcessDoorSmashOpened(USHDoorMovementComponent* MovementComponent);
    
    UFUNCTION()
    void ProcessDoorPhysicMovementStart(USHDoorMovementComponent* MovementComponent);
    
    UFUNCTION()
    void ProcessDoorPhysicMovementInterupted(USHDoorMovementComponent* MovementComponent);
    
    UFUNCTION()
    void ProcessDoorPhysicMovementComplete(USHDoorMovementComponent* MovementComponent);
    
    UFUNCTION()
    void ProcessDoorFakeMovementStart(USHDoorMovementComponent* MovementComponent);
    
    UFUNCTION()
    void ProcessDoorFakeMovementInterupted(USHDoorMovementComponent* MovementComponent);
    
    UFUNCTION()
    void ProcessDoorFakeMovementComplete(USHDoorMovementComponent* MovementComponent);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsAudioBlocked() const;
    
};

