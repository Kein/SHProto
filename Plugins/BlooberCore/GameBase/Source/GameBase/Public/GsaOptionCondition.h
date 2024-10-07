#pragma once
#include "CoreMinimal.h"
#include "EGsaOptionConditionAction.h"
#include "GsaOptionCondition.generated.h"

USTRUCT()
struct GAMEBASE_API FGsaOptionCondition {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName Property;
    
    UPROPERTY(EditAnywhere)
    int32 Value;
    
    UPROPERTY(EditAnywhere)
    EGsaOptionConditionAction action;
    
    FGsaOptionCondition();
};

