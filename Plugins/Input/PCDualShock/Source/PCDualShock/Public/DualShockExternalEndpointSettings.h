#pragma once
#include "CoreMinimal.h"
#include "IAudioEndpoint.h"
#include "DualShockExternalEndpointSettings.generated.h"

UCLASS(EditInlineNew)
class UDualShockExternalEndpointSettings : public UAudioEndpointSettingsBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 ControllerIndex;
    
    UDualShockExternalEndpointSettings();

};

