#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "FloatKey.h"
#include "AxisBind.generated.h"

USTRUCT(BlueprintType)
struct INPUTREBINDING_API FAxisBind {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName Name;
    
    UPROPERTY()
    TArray<FFloatKey> FloatKeys;
    
    UPROPERTY()
    TArray<FKey> PlusKeys;
    
    UPROPERTY()
    TArray<FKey> MinusKeys;
    
    UPROPERTY()
    bool Toggleable;
    
    FAxisBind();
};

