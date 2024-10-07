#pragma once
#include "CoreMinimal.h"
#include "MaiTickLODConfig.generated.h"

USTRUCT(BlueprintType)
struct MAI_API FMaiTickLODConfig {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float _MaxDistance;
    
    UPROPERTY(EditAnywhere)
    float _TickInterval;
    
    FMaiTickLODConfig();
};

