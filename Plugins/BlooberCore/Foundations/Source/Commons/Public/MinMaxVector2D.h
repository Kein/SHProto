#pragma once
#include "CoreMinimal.h"
#include "MinMaxVector2D.generated.h"

USTRUCT(BlueprintType)
struct COMMONS_API FMinMaxVector2D {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float Min;
    
    UPROPERTY(EditAnywhere)
    float Max;
    
    FMinMaxVector2D();
};

