#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Distributions/DistributionVector.h"
#include "DistributionVectorUniformParam.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class UDistributionVectorUniformParam : public UDistributionVector {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName MaxParameterName;
    
    UPROPERTY(EditAnywhere)
    FName MinParameterName;
    
    UPROPERTY(EditAnywhere)
    FVector DefaultMax;
    
    UPROPERTY(EditAnywhere)
    FVector DefaultMin;
    
    UDistributionVectorUniformParam();

};

