#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "SHEnemyHitReactionSelectionAllowedStates.h"
#include "SHHitReactionSelectionHitReactionBlockerInterface.h"
#include "SHAnimNState_HyperArmor.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class SHPROTO_API USHAnimNState_HyperArmor : public UAnimNotifyState, public ISHHitReactionSelectionHitReactionBlockerInterface {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FSHEnemyHitReactionSelectionAllowedStates AllowedHitReactions;
    
    USHAnimNState_HyperArmor();


    // Fix for true pure virtual functions not being implemented
};

