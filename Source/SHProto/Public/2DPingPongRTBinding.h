#pragma once
#include "CoreMinimal.h"
#include "2DPingPongRTBinding.generated.h"

USTRUCT(BlueprintType)
struct F2DPingPongRTBinding {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName ParameterName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 RTIndex;
    
    SHPROTO_API F2DPingPongRTBinding();
};

