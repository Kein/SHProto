#pragma once
#include "CoreMinimal.h"
#include "MinMaxVector2D.h"
#include "ESHHitReactionRotation.h"
#include "SHHitReactionRotationConfiguration.generated.h"

USTRUCT(BlueprintType)
struct SHPROTO_API FSHHitReactionRotationConfiguration {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ESHHitReactionRotation ApplyRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RotationDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FMinMaxVector2D YawOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bReplaceCurrentRotation;
    
    FSHHitReactionRotationConfiguration();
};

