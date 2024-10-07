#pragma once
#include "CoreMinimal.h"
#include "Engine/Scene.h"
#include "SHBlenderBase.h"
#include "SHCameraPostProcessBlender.generated.h"

UCLASS()
class SHPROTO_API USHCameraPostProcessBlender : public USHBlenderBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    FPostProcessSettings BlendedData;
    
public:
    USHCameraPostProcessBlender();

};

