#pragma once
#include "CoreMinimal.h"
#include "SHElevatorFloorConfig.generated.h"

USTRUCT(BlueprintType)
struct FSHElevatorFloorConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FloorOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool OpenFrontInsideDoor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool OpenBackInsideDoor;
    
    SHPROTO_API FSHElevatorFloorConfig();
};

