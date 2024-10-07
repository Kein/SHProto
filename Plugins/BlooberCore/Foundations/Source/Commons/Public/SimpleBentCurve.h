#pragma once
#include "CoreMinimal.h"
#include "SimpleBentCurve.generated.h"

USTRUCT(BlueprintType)
struct COMMONS_API FSimpleBentCurve {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BendPower;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bSShape;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bDescending;
    
    FSimpleBentCurve();
};

