#pragma once
#include "CoreMinimal.h"
#include "DirectionCondition.h"
#include "MinMaxVector2D.h"
#include "SHEnemyHitReactionSelectionHitCountersResetConfiguration.h"
#include "SHEnemyHitReactionSelectionHitReactionRequiredActiveHitReactions.h"
#include "SHEnemyHitReactionSelectionHitReactionRequiredAggression.h"
#include "SHEnemyHitReactionSelectionHitReactionTypeConfiguration.h"
#include "SHEnemyHitReactionSelectionHitReactionTypeVariantConfiguration.h"
#include "SHEnemyHitReactionSelectionHitReactionOption.generated.h"

USTRUCT()
struct FSHEnemyHitReactionSelectionHitReactionOption {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float PassChance;
    
    UPROPERTY(EditDefaultsOnly)
    FMinMaxVector2D RequiredHealth;
    
    UPROPERTY(EditDefaultsOnly)
    FSHEnemyHitReactionSelectionHitReactionRequiredAggression RequiredAggression;
    
    UPROPERTY(EditDefaultsOnly)
    FMinMaxVector2D RequiredDistance;
    
    UPROPERTY(EditDefaultsOnly)
    FDirectionCondition RequiredDirection;
    
    UPROPERTY(EditDefaultsOnly)
    FMinMaxVector2D RequiredTargetVelocity;
    
    UPROPERTY(EditDefaultsOnly)
    FDirectionCondition RequiredTargetVelocityDirection;
    
    UPROPERTY(EditDefaultsOnly)
    FSHEnemyHitReactionSelectionHitReactionRequiredActiveHitReactions RequiredActiveHitReactions;
    
    UPROPERTY(EditDefaultsOnly)
    float DamageMultiplier;
    
    UPROPERTY(EditDefaultsOnly)
    float MaximumRemainingHealthFraction;
    
    UPROPERTY(EditDefaultsOnly)
    FSHEnemyHitReactionSelectionHitReactionTypeConfiguration KnockdownHitReaction;
    
    UPROPERTY(EditDefaultsOnly)
    FSHEnemyHitReactionSelectionHitReactionTypeConfiguration StaggerHitReaction;
    
    UPROPERTY(EditDefaultsOnly)
    FSHEnemyHitReactionSelectionHitReactionTypeConfiguration FalterHitReaction;
    
    UPROPERTY(EditDefaultsOnly)
    FSHEnemyHitReactionSelectionHitReactionTypeConfiguration NormalHitReaction;
    
    UPROPERTY(EditDefaultsOnly)
    FSHEnemyHitReactionSelectionHitReactionTypeConfiguration TwitchHitReaction;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FSHEnemyHitReactionSelectionHitReactionTypeVariantConfiguration> DeathVariants;
    
    UPROPERTY(EditDefaultsOnly)
    FSHEnemyHitReactionSelectionHitCountersResetConfiguration ResetHitCounters;
    
    SHPROTO_API FSHEnemyHitReactionSelectionHitReactionOption();
};

