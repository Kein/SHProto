#pragma once
#include "CoreMinimal.h"
#include "MinMaxVector2D.h"
#include "SHHitReactionStateConfiguration.generated.h"

USTRUCT(BlueprintType)
struct SHPROTO_API FSHHitReactionStateConfiguration {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FMinMaxVector2D StateDuration;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bDisableAI;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bDisableControllerRotation;
    
    FSHHitReactionStateConfiguration();
};

