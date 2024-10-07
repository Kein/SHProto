#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "AnimNotify_AttackHit.generated.h"

UCLASS(CollapseCategories, MinimalAPI)
class UAnimNotify_AttackHit : public UAnimNotify {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    int32 _ImpactID;
    
    UPROPERTY(EditAnywhere)
    float _Damage;
    
public:
    UAnimNotify_AttackHit();

};

