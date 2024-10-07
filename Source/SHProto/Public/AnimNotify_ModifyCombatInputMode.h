#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "ESHCombatInputModeEnum.h"
#include "ESHModifyCombatInputModeAction.h"
#include "ESHModifyCombatInputModeOperation.h"
#include "AnimNotify_ModifyCombatInputMode.generated.h"

UCLASS(CollapseCategories)
class SHPROTO_API UAnimNotify_ModifyCombatInputMode : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    ESHCombatInputModeEnum RequiredInputMode;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<ESHModifyCombatInputModeAction, ESHModifyCombatInputModeOperation> Tasks;
    
    UAnimNotify_ModifyCombatInputMode();

};

