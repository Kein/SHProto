#pragma once
#include "CoreMinimal.h"
#include "ESHHitReactionResponseType.h"
#include "SHHitReactionStateAnimationSerializedData.h"
#include "SHHitReactionStateSerializedData.generated.h"

USTRUCT(BlueprintType)
struct SHPROTO_API FSHHitReactionStateSerializedData {
    GENERATED_BODY()
public:
    UPROPERTY(SaveGame)
    TArray<FSHHitReactionStateAnimationSerializedData> BoundAnimations;
    
    UPROPERTY(SaveGame)
    TArray<FSHHitReactionStateAnimationSerializedData> FinishingAnimations;
    
    UPROPERTY(SaveGame)
    bool bStateStartedManually;
    
    UPROPERTY(SaveGame)
    float RemainingDuration;
    
    UPROPERTY(SaveGame)
    ESHHitReactionResponseType StateHitReactionType;
    
    UPROPERTY(SaveGame)
    FName StateHitReactionVariant;
    
    UPROPERTY(SaveGame)
    bool bStateWantsToBlockAI;
    
    UPROPERTY(SaveGame)
    bool bStateWantsToPreventControllerRotation;
    
    FSHHitReactionStateSerializedData();
};

