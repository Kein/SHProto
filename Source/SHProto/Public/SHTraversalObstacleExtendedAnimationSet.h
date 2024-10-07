#pragma once
#include "CoreMinimal.h"
#include "PlayAnimationData.h"
#include "SHTraversalObstacleExtendedAnimationSet.generated.h"

USTRUCT(BlueprintType)
struct FSHTraversalObstacleExtendedAnimationSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FPlayAnimationData StartAnimation;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FPlayAnimationData FailAnimation;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FPlayAnimationData SuccessAnimation;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FPlayAnimationData EndAnimation;
    
    SHPROTO_API FSHTraversalObstacleExtendedAnimationSet();
};

