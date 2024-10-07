#pragma once
#include "CoreMinimal.h"
#include "MaiTokenCooldown.generated.h"

USTRUCT(BlueprintType)
struct MAI_API FMaiTokenCooldown {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 _Token;
    
    UPROPERTY(EditAnywhere)
    float _Cooldown;
    
    FMaiTokenCooldown();
};

