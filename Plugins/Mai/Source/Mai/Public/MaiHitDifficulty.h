#pragma once
#include "CoreMinimal.h"
#include "MaiHitDifficulty.generated.h"

USTRUCT(BlueprintType)
struct MAI_API FMaiHitDifficulty {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<uint8> _ChancePerHit;
    
    FMaiHitDifficulty();
};

