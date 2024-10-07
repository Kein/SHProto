#pragma once
#include "CoreMinimal.h"
#include "ESHHitReactionResponseType.h"
#include "SHHitReactionAnimationConfiguration.h"
#include "SHHitReactionStateConfiguration.h"
#include "SHHitReactionArtificialHitConfiguration.generated.h"

class USHEnemyTransformationState;

USTRUCT(BlueprintType)
struct SHPROTO_API FSHHitReactionArtificialHitConfiguration {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FString DebugReactionName;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    ESHHitReactionResponseType HitReactionType;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName HitReactionVariant;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    USHEnemyTransformationState* TransformationState;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float HitReactionStartTime;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FSHHitReactionStateConfiguration HitReactionState;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FSHHitReactionAnimationConfiguration> Animations;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FSHHitReactionAnimationConfiguration> FinishingAnimations;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FSHHitReactionAnimationConfiguration> TwitchAnimations;
    
    FSHHitReactionArtificialHitConfiguration();
};

