#pragma once
#include "CoreMinimal.h"
#include "PelvisAdjustmentInterp.generated.h"

USTRUCT(BlueprintType)
struct FPelvisAdjustmentInterp {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Stiffness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Dampen;
    
    CUSTOMANIMNODE_API FPelvisAdjustmentInterp();
};

