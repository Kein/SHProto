#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SHFXNurseHeadShakeSubcompSettings.generated.h"

UCLASS(BlueprintType)
class SHPROTO_API USHFXNurseHeadShakeSubcompSettings : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool EnableHeadShake;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName HeadSocketName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 MaterialIndex;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float OffsetScale;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float Magnitude;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ClampMovement;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float LimitAccelerationMultiply;
    
    USHFXNurseHeadShakeSubcompSettings();

};

