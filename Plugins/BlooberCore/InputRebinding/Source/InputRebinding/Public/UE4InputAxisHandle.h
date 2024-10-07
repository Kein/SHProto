#pragma once
#include "CoreMinimal.h"
#include "UE4InputAxisHandle.generated.h"

USTRUCT(BlueprintType)
struct INPUTREBINDING_API FUE4InputAxisHandle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FName AxisName;
    
    FUE4InputAxisHandle();
};

