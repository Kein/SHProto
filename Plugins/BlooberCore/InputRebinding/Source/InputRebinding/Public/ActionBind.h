#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "ActionBind.generated.h"

USTRUCT(BlueprintType)
struct INPUTREBINDING_API FActionBind {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName Name;
    
    UPROPERTY()
    TArray<FKey> Keys;
    
    UPROPERTY()
    bool Toggleable;
    
    FActionBind();
};

