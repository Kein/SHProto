#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SHAnimHeadRotationBaseSubcompSettings.h"
#include "SHAnimHeadRotationSubcompSettings.generated.h"

USTRUCT(BlueprintType)
struct SHPROTO_API FSHAnimHeadRotationSubcompSettings : public FSHAnimHeadRotationBaseSubcompSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float AimOffsetOnIdleHeadInterpSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float AimOffsetBackToDefaultHeadWaitTimer;
    
    UPROPERTY(EditDefaultsOnly)
    FVector2D HeadOnAimTargetVerticalLimit;
    
    UPROPERTY(EditDefaultsOnly)
    FVector2D HeadOnAimTargetHorizontalLimit;
    
    FSHAnimHeadRotationSubcompSettings();
};

