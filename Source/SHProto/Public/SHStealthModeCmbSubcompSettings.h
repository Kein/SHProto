#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SHBlendData.h"
#include "SHMovementDataStruct.h"
#include "SHStealthModeCmbSubcompSettings.generated.h"

UCLASS(BlueprintType)
class SHPROTO_API USHStealthModeCmbSubcompSettings : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RotationInputScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ControlRotationInterpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSHMovementDataStruct MovementData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FOVValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSHBlendData FOVBlend;
    
    USHStealthModeCmbSubcompSettings();

};

