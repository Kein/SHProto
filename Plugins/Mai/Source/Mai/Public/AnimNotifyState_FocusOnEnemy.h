#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "AnimNotifyState_FocusOnEnemy.generated.h"

UCLASS(CollapseCategories, EditInlineNew, MinimalAPI)
class UAnimNotifyState_FocusOnEnemy : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool _ActOnSnapping;
    
    UAnimNotifyState_FocusOnEnemy();

};

