#pragma once
#include "CoreMinimal.h"
#include "SHEnemyHitReactionSelectionHitCountersResetConfiguration.generated.h"

USTRUCT()
struct FSHEnemyHitReactionSelectionHitCountersResetConfiguration {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    bool bResetHitBoneGroupCounter;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FName> ResetCountersOfBoneGroups;
    
    SHPROTO_API FSHEnemyHitReactionSelectionHitCountersResetConfiguration();
};

