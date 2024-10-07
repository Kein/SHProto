#pragma once
#include "CoreMinimal.h"
#include "SHLightingChannelsPack.generated.h"

USTRUCT(BlueprintType)
struct FSHLightingChannelsPack {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool Ch0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool Ch1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool Ch2;
    
    SHPROTO_API FSHLightingChannelsPack();
};

