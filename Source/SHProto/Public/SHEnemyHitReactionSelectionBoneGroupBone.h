#pragma once
#include "CoreMinimal.h"
#include "SHEnemyHitReactionSelectionBoneGroupBone.generated.h"

USTRUCT()
struct FSHEnemyHitReactionSelectionBoneGroupBone {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FName BoneName;
    
    UPROPERTY(EditDefaultsOnly)
    int32 BoneShapeIndex;
    
    SHPROTO_API FSHEnemyHitReactionSelectionBoneGroupBone();
};

