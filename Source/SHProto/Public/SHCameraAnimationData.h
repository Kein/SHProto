#pragma once
#include "CoreMinimal.h"
#include "SHCameraAnimationBlending.h"
#include "SHCameraAnimationData.generated.h"

class ASHCameraAnimationExecutive;
class ULevelSequence;

USTRUCT(BlueprintType)
struct SHPROTO_API FSHCameraAnimationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftClassPtr<ASHCameraAnimationExecutive> CameraAnimationExeClass;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<ULevelSequence> CameraAnimationAsset;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSHCameraAnimationBlending CameraAnimationBlending;
    
    FSHCameraAnimationData();
};

