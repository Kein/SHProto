#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "EBeingAttackStage.h"
#include "AnimNotifyState_AttackStage.generated.h"

UCLASS(CollapseCategories, EditInlineNew, MinimalAPI)
class UAnimNotifyState_AttackStage : public UAnimNotifyState {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    EBeingAttackStage _Stage;
    
public:
    UAnimNotifyState_AttackStage();

};

