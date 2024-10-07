#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "EFoot.h"
#include "Templates/SubclassOf.h"
#include "AnimNotify_Footstep.generated.h"

class ABeingFootstep;

UCLASS(CollapseCategories, MinimalAPI)
class UAnimNotify_Footstep : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EFoot _Foot;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<ABeingFootstep> _OverrideFootsteps;
    
    UAnimNotify_Footstep();

};

