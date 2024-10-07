#pragma once
#include "CoreMinimal.h"
#include "SHEnemyHitReactionSelectionAllowedHitReactionState.h"
#include "SHEnemyHitReactionSelectionAllowedStates.generated.h"

USTRUCT(BlueprintType)
struct FSHEnemyHitReactionSelectionAllowedStates {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSHEnemyHitReactionSelectionAllowedHitReactionState Knockdown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSHEnemyHitReactionSelectionAllowedHitReactionState Falter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSHEnemyHitReactionSelectionAllowedHitReactionState Stagger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSHEnemyHitReactionSelectionAllowedHitReactionState Normal;
    
    SHPROTO_API FSHEnemyHitReactionSelectionAllowedStates();
};

