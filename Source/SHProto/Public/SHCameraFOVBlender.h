#pragma once
#include "CoreMinimal.h"
#include "SHBlenderBase.h"
#include "SHCameraFOVBlender.generated.h"

UCLASS()
class SHPROTO_API USHCameraFOVBlender : public USHBlenderBase {
    GENERATED_BODY()
public:
    USHCameraFOVBlender();

    UFUNCTION(BlueprintPure)
    float GetAssignedValue() const;
    
};

