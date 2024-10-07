#pragma once
#include "CoreMinimal.h"
#include "MaiTokenConfig.h"
#include "MaiHostileConfig.generated.h"

USTRUCT(BlueprintType)
struct MAI_API FMaiHostileConfig {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint8 _SlotNum;
    
    UPROPERTY(EditAnywhere)
    int32 _TokenCoins;
    
    UPROPERTY(EditAnywhere)
    FMaiTokenConfig _TokenConfig[32];
    
    FMaiHostileConfig();
};

