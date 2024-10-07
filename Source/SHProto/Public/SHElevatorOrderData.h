#pragma once
#include "CoreMinimal.h"
#include "SHElevatorOrderData.generated.h"

USTRUCT(BlueprintType)
struct FSHElevatorOrderData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 BeginFloor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 TargetFloor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float OrderFloorAlpha;
    
    SHPROTO_API FSHElevatorOrderData();
};

