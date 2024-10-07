#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "DeviceAwareInterface.generated.h"

UINTERFACE(Blueprintable)
class UCW_API UDeviceAwareInterface : public UInterface {
    GENERATED_BODY()
};

class UCW_API IDeviceAwareInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintImplementableEvent)
    void OnInputDeviceChanged();
    
};

