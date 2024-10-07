#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "FloatKey.generated.h"

USTRUCT(BlueprintType)
struct INPUTREBINDING_API FFloatKey {
    GENERATED_BODY()
public:
    UPROPERTY()
    FKey Key;
    
    UPROPERTY()
    float Scale;
    
    FFloatKey();
};

