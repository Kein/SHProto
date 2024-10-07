#pragma once
#include "CoreMinimal.h"
#include "SHAkComponent.h"
#include "SHAkDoorBaseComponent.generated.h"

class UAkSwitchValue;
class USHDoorAnimationsComponent;
class USHDoorLockBaseComponent;
class USHDoorMovementBaseComponent;

UCLASS(Abstract, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SHPROTO_API USHAkDoorBaseComponent : public USHAkComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    UAkSwitchValue* DoorTypeSwitch;
    
    UPROPERTY(EditDefaultsOnly)
    UAkSwitchValue* DoorLockState_Locked;
    
    UPROPERTY(EditDefaultsOnly)
    UAkSwitchValue* DoorLockState_Unlocked;
    
    UPROPERTY(Instanced, Transient)
    USHDoorMovementBaseComponent* ManagedDoorMovement;
    
public:
    USHAkDoorBaseComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION()
    void ProcessOnLockAnimPlayed(USHDoorAnimationsComponent* DoorAnimComponent);
    
    UFUNCTION()
    void ProcessOnDoorLockStateChanged(USHDoorLockBaseComponent* LockComponent);
    
    UFUNCTION()
    void ProcessOnAutoLockedDoorCheckAnimPlayed(USHDoorAnimationsComponent* DoorAnimComponent);
    
};

