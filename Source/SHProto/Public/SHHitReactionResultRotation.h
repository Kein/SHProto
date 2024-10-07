#pragma once
#include "CoreMinimal.h"
#include "SHHitReactionResultRotation.generated.h"

USTRUCT(BlueprintType)
struct SHPROTO_API FSHHitReactionResultRotation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AddYaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RotationDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bReplaceCurrentRotation;
    
    FSHHitReactionResultRotation();
};

