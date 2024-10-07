#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "SHAnimNotifyState_LookAtEnemy.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class SHPROTO_API USHAnimNotifyState_LookAtEnemy : public UAnimNotifyState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    bool _CheckConeRange;
    
    UPROPERTY(EditAnywhere)
    float _ConeRange;
    
    UPROPERTY(EditAnywhere)
    uint8 _Priority;
    
public:
    USHAnimNotifyState_LookAtEnemy();

};

