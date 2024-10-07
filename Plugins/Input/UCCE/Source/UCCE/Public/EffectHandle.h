#pragma once
#include "CoreMinimal.h"
#include "EffectHandle.generated.h"

USTRUCT(BlueprintType)
struct UCCE_API FEffectHandle {
    GENERATED_BODY()
public:
private:
    UPROPERTY(SaveGame, VisibleAnywhere)
    FName UniqueID;
    
public:
    FEffectHandle();
};

