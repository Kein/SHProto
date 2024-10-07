#pragma once
#include "CoreMinimal.h"
#include "Distributions/DistributionFloat.h"
#include "DistributionFloatUniformParam.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class UDistributionFloatUniformParam : public UDistributionFloat {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName MaxParameterName;
    
    UPROPERTY(EditAnywhere)
    FName MinParameterName;
    
    UPROPERTY(EditAnywhere)
    float DefaultMax;
    
    UPROPERTY(EditAnywhere)
    float DefaultMin;
    
    UDistributionFloatUniformParam();

};

