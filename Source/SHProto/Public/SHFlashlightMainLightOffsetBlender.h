#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SHBlenderBase.h"
#include "SHFlashlightMainLightOffsetBlender.generated.h"

UCLASS()
class SHPROTO_API USHFlashlightMainLightOffsetBlender : public USHBlenderBase {
    GENERATED_BODY()
public:
    USHFlashlightMainLightOffsetBlender();

    UFUNCTION(BlueprintPure)
    FVector GetAssignedValue() const;
    
};

