#pragma once
#include "CoreMinimal.h"
#include "Range.generated.h"

USTRUCT(BlueprintType)
struct MAI_API FRange {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float _Min;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float _Max;
    
    FRange();
};

