#pragma once
#include "CoreMinimal.h"
#include "DirectionCondition.generated.h"

USTRUCT(BlueprintType)
struct COMMONS_API FDirectionCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float YawAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float YawAngleTolerance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PitchAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PitchAngleTolerance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bConeShape;
    
    FDirectionCondition();
};

