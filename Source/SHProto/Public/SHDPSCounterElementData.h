#pragma once
#include "CoreMinimal.h"
#include "SHDPSCounterElementData.generated.h"

USTRUCT(BlueprintType)
struct FSHDPSCounterElementData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    double DamageTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DamageValue;
    
    SHPROTO_API FSHDPSCounterElementData();
};

