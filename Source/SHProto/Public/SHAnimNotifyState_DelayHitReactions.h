#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "ESHHitReactionResponseType.h"
#include "SHAnimNotifyState_DelayHitReactions.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class SHPROTO_API USHAnimNotifyState_DelayHitReactions : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    ESHHitReactionResponseType DelayHitReactionTypes;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FName> DontDelayVariants;
    
    USHAnimNotifyState_DelayHitReactions();

};

