#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EnviroHitReactionSettings.generated.h"

class UAkAudioEvent;

USTRUCT(BlueprintType)
struct FEnviroHitReactionSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector2D HitAngleThresholdMinMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool AllowedWhenWalking;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool AllowedWhenRunning;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAkAudioEvent* Audio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float LookAtBlendOutSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float LookAtBlendInSpeed;
    
    SHPROTO_API FEnviroHitReactionSettings();
};

