#pragma once
#include "CoreMinimal.h"
#include "MaiFloatDiff.generated.h"

USTRUCT(BlueprintType)
struct MAI_API FMaiFloatDiff {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float _Value[10];
    
    FMaiFloatDiff();
};

