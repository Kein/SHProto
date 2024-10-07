#pragma once
#include "CoreMinimal.h"
#include "ISoundfieldEndpoint.h"
#include "DualShockSoundfieldEndpointSettings.generated.h"

UCLASS(EditInlineNew)
class UDualShockSoundfieldEndpointSettings : public USoundfieldEndpointSettingsBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 ControllerIndex;
    
    UDualShockSoundfieldEndpointSettings();

};

