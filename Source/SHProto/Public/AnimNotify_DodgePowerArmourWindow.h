#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "ECombatDifficulty.h"
#include "AnimNotify_DodgePowerArmourWindow.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class SHPROTO_API UAnimNotify_DodgePowerArmourWindow : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bLimitToRequiredCombatDifficulty;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    ECombatDifficulty RequiredCombatDifficulty;
    
    UAnimNotify_DodgePowerArmourWindow();

};

