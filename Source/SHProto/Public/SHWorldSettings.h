#pragma once
#include "CoreMinimal.h"
#include "AtmosphereCtrlWorldSettings.h"
#include "SHWorldSettings.generated.h"

UCLASS()
class SHPROTO_API ASHWorldSettings : public AAtmosphereCtrlWorldSettings {
    GENERATED_BODY()
public:
    ASHWorldSettings(const FObjectInitializer& ObjectInitializer);

};

