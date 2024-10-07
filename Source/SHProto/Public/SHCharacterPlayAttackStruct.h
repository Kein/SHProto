#pragma once
#include "CoreMinimal.h"
#include "SHCharacterPlayAttackBaseData.h"
#include "SHCharacterPlayAttackStruct.generated.h"

class UCurveFloat;
class USHCharacterPlayAttackCameraDataAsset;

USTRUCT(BlueprintType)
struct SHPROTO_API FSHCharacterPlayAttackStruct : public FSHCharacterPlayAttackBaseData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float DesiredDistanceFromEnemy;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MaxSlideDistance;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float SlideDuration;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float SlideBackDuration;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UCurveFloat* SlideCurve;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float RotationDuration;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UCurveFloat* RotationCurve;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    USHCharacterPlayAttackCameraDataAsset* HasTargetCameraWorkData;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    USHCharacterPlayAttackCameraDataAsset* NoTargetCameraWorkData;
    
    FSHCharacterPlayAttackStruct();
};

