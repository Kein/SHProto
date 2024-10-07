#pragma once
#include "CoreMinimal.h"
#include "PlayAnimationData.h"
#include "SHObstacleAnimationSet.generated.h"

USTRUCT(BlueprintType)
struct FSHObstacleAnimationSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FPlayAnimationData DefaultAnimationAbove;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FPlayAnimationData DefaultAnimationBelow;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TMap<FName, FPlayAnimationData> WeaponsAnimationsAbove;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TMap<FName, FPlayAnimationData> WeaponsAnimationsBelow;
    
    SHPROTO_API FSHObstacleAnimationSet();
};

