#pragma once
#include "CoreMinimal.h"
#include "SHCameraDataStruct.h"
#include "SHCameraDataFull.generated.h"

USTRUCT(BlueprintType)
struct FSHCameraDataFull {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSHCameraDataStruct MainData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSHCameraDataStruct MaxCollisionData;
    
    SHPROTO_API FSHCameraDataFull();
};

