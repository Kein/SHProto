#pragma once
#include "CoreMinimal.h"
#include "SHFlashlightTransformProcessor.h"
#include "SHFlashlightLookAtTransformProcessor.generated.h"

class USceneComponent;

UCLASS()
class SHPROTO_API USHFlashlightLookAtTransformProcessor : public USHFlashlightTransformProcessor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Instanced, Transient)
    USceneComponent* LookAtRef;
    
public:
    USHFlashlightLookAtTransformProcessor();

};

