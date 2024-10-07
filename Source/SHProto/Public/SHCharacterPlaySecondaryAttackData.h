#pragma once
#include "CoreMinimal.h"
#include "SHCharacterPlayAttackBaseData.h"
#include "SHViewLookOperationSettings.h"
#include "SHCharacterPlaySecondaryAttackData.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct SHPROTO_API FSHCharacterPlaySecondaryAttackData : public FSHCharacterPlayAttackBaseData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float DesiredDistanceFromTarget;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float SlideDuration;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UCurveFloat* SlideCurve;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float RotationDuration;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UCurveFloat* RotationCurve;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bSecureCameraView;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ViewLookAtTargetDuration;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSHViewLookOperationSettings ViewLookAtTargetSettings;
    
    FSHCharacterPlaySecondaryAttackData();
};

