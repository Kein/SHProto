#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "Templates/SubclassOf.h"
#include "SH_AnimNotify_PHSetLocomotion.generated.h"

class USHPHLocomotionAnimInstance;

UCLASS(CollapseCategories)
class SHPROTO_API USH_AnimNotify_PHSetLocomotion : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<USHPHLocomotionAnimInstance> NewLocomotion;
    
    USH_AnimNotify_PHSetLocomotion();

};

