#pragma once
#include "CoreMinimal.h"
#include "ESHHitReactionResponseType.h"
#include "SHHitReactionResultState.generated.h"

USTRUCT(BlueprintType)
struct SHPROTO_API FSHHitReactionResultState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ESHHitReactionResponseType HitReactionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName HitReactionVariant;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float StateDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SkipToDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bDisableAI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bDisableControllerRotation;
    
    FSHHitReactionResultState();
};

