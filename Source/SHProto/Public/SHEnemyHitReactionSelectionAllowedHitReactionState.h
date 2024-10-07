#pragma once
#include "CoreMinimal.h"
#include "SHEnemyHitReactionSelectionAllowedHitReactionState.generated.h"

USTRUCT(BlueprintType)
struct FSHEnemyHitReactionSelectionAllowedHitReactionState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bAllow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FName> PreventVariants;
    
    SHPROTO_API FSHEnemyHitReactionSelectionAllowedHitReactionState();
};

