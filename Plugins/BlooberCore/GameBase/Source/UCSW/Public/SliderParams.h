#pragma once
#include "CoreMinimal.h"
#include "SliderParams.generated.h"

USTRUCT(BlueprintType)
struct UCSW_API FSliderParams {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float Min;
    
    UPROPERTY(EditAnywhere)
    float Max;
    
    UPROPERTY(EditAnywhere)
    float Step;
    
    FSliderParams();
};

