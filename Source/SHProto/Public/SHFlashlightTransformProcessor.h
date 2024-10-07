#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SHFlashlightTransformProcessor.generated.h"

class ASHFlashlight;

UCLASS(Abstract)
class SHPROTO_API USHFlashlightTransformProcessor : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    ASHFlashlight* Owner;
    
public:
    USHFlashlightTransformProcessor();

};

