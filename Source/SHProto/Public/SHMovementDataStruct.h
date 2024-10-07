#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "SHMovementDataStruct.generated.h"

class UCurveFloat;
class ULegacyCameraShake;

USTRUCT(BlueprintType)
struct FSHMovementDataStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float SpeedForward;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float SpeedSideway;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float SpeedBackward;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ControlRotationInterpSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UCurveFloat* AccelerationCurve;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UCurveFloat* DecelerationCurve;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<ULegacyCameraShake> SprintCameraShake;
    
    SHPROTO_API FSHMovementDataStruct();
};

