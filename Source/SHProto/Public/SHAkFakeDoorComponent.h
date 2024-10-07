#pragma once
#include "CoreMinimal.h"
#include "SHAkComponent.h"
#include "SHAkFakeDoorComponent.generated.h"

class UAkSwitchValue;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SHPROTO_API USHAkFakeDoorComponent : public USHAkComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    UAkSwitchValue* DoorTypeSwitch;
    
    UPROPERTY(EditDefaultsOnly)
    UAkSwitchValue* DoorLockState_Locked;
    
public:
    USHAkFakeDoorComponent(const FObjectInitializer& ObjectInitializer);

};

