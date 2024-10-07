#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SHBlendData.h"
#include "SHCameraDataStruct.generated.h"

class UCurveFloat;
class UCurveVector;

USTRUCT(BlueprintType)
struct FSHCameraDataStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSHBlendData BlendData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UCurveFloat* ArmLengthFromPitchCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UCurveVector* SocketOffsetFromPitchCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector TargetOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float TargetOffsetExtraHeightFromPitchScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MovementForwardCameraLag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MovementNonForwardCameraLag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RotationLag;
    
    SHPROTO_API FSHCameraDataStruct();
};

