#pragma once
#include "CoreMinimal.h"
#include "ActionBind.h"
#include "AxisBind.h"
#include "BindingList.generated.h"

USTRUCT(BlueprintType)
struct INPUTREBINDING_API FBindingList {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    TArray<FActionBind> ActionBindings;
    
    UPROPERTY()
    TArray<FAxisBind> AxisBindings;
    
    UPROPERTY()
    bool bIgnoreExoticBinds;
    
public:
    FBindingList();
};

