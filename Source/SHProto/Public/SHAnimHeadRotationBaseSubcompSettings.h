#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SHAnimSubcompSettings.h"
#include "SHAnimHeadRotationBaseSubcompSettings.generated.h"

USTRUCT(BlueprintType)
struct SHPROTO_API FSHAnimHeadRotationBaseSubcompSettings : public FSHAnimSubcompSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FName AimOffsetLinkedAnimGraphTag;
    
    UPROPERTY(EditDefaultsOnly)
    float AimOffsetHeadInterpSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float AimOffsetHeadLookAtTargetInterpSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float AimOffsetBackToDefaultHeadInterpSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    FVector2D HeadRotationVerticalLimit;
    
    UPROPERTY(EditDefaultsOnly)
    FVector2D HeadRotationHorizontalLimit;
    
    UPROPERTY(EditDefaultsOnly)
    float DefaultLookAtBlendOutAlphaSpeed;
    
    FSHAnimHeadRotationBaseSubcompSettings();
};

