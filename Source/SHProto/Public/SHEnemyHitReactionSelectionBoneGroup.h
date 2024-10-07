#pragma once
#include "CoreMinimal.h"
#include "SHEnemyHitReactionSelectionBoneGroupBone.h"
#include "SHEnemyHitReactionSelectionBoneGroup.generated.h"

USTRUCT(BlueprintType)
struct FSHEnemyHitReactionSelectionBoneGroup {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    FName GroupName;
    
    UPROPERTY()
    TArray<FName> Bones;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FSHEnemyHitReactionSelectionBoneGroupBone> GroupBones;
    
    UPROPERTY(EditDefaultsOnly)
    bool bUseIndividualConsecutiveHitsCounter;
    
    UPROPERTY(EditDefaultsOnly)
    FName CustomConsecutiveHitsCounter;
    
public:
    SHPROTO_API FSHEnemyHitReactionSelectionBoneGroup();
};

