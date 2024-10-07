#pragma once
#include "CoreMinimal.h"
#include "SHBlenderBase.h"
#include "SHCameraDataStruct.h"
#include "SHCameraDataBlender.generated.h"

UCLASS()
class SHPROTO_API USHCameraDataBlender : public USHBlenderBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    FSHCameraDataStruct CameraData;
    
    UPROPERTY()
    FSHCameraDataStruct CollisionData;
    
public:
    USHCameraDataBlender();

};

