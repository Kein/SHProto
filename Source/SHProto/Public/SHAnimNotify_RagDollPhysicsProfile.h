#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "SHAnimNotify_RagDollPhysicsProfile.generated.h"

UCLASS(CollapseCategories)
class SHPROTO_API USHAnimNotify_RagDollPhysicsProfile : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName SetPhysicsProfile;
    
    UPROPERTY(EditAnywhere)
    FName SetConstraintsProfile;
    
    USHAnimNotify_RagDollPhysicsProfile();

};

