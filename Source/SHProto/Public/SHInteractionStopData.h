#pragma once
#include "CoreMinimal.h"
#include "ESHInteractionStopReason.h"
#include "SHInteractionStopData.generated.h"

USTRUCT(BlueprintType)
struct FSHInteractionStopData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ESHInteractionStopReason Reason;
    
    SHPROTO_API FSHInteractionStopData();
};

