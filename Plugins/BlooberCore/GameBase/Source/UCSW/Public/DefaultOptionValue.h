#pragma once
#include "CoreMinimal.h"
#include "DefaultOptionValue.generated.h"

USTRUCT()
struct FDefaultOptionValue {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    int32 BaseValue;
    
    UPROPERTY(EditAnywhere)
    int32 Value;
    
    UCSW_API FDefaultOptionValue();
};

