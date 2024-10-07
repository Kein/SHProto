#pragma once
#include "CoreMinimal.h"
#include "RaycastDetectorTraceData.h"
#include "SHRaycastDetectorTraceData.generated.h"

USTRUCT(BlueprintType)
struct FSHRaycastDetectorTraceData : public FRaycastDetectorTraceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Range;
    
    SHPROTO_API FSHRaycastDetectorTraceData();
};

