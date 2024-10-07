#pragma once
#include "CoreMinimal.h"
#include "TickableFloat.generated.h"

USTRUCT(BlueprintType)
struct FTickableFloat {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float _Value;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float _TargetValue;
    
    UPROPERTY(EditAnywhere)
    float _Step;
    
    BEING_API FTickableFloat();
};

