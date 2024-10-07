#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SHViewLookOperationSettings.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct FSHViewLookOperationSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIsSoftOperation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SoftOperationBreakValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIsDynamicRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float YawAngleOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIsSecuredOperation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UCurveFloat* EaseCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRotator MaxUnsecuredDeltaRotator;
    
    SHPROTO_API FSHViewLookOperationSettings();
};

