#pragma once
#include "CoreMinimal.h"
#include "MaiTokenConfig.generated.h"

USTRUCT(BlueprintType)
struct MAI_API FMaiTokenConfig {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float _Cooldown;
    
    UPROPERTY(EditAnywhere)
    uint8 _Cost;
    
    UPROPERTY(EditAnywhere)
    int32 _Pool;
    
    FMaiTokenConfig();
};

