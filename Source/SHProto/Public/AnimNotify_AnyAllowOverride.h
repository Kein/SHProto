#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "ESHCombatInputModeEnum.h"
#include "AnimNotify_AnyAllowOverride.generated.h"

UCLASS(CollapseCategories)
class SHPROTO_API UAnimNotify_AnyAllowOverride : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    ESHCombatInputModeEnum RequiredInputMode;
    
    UAnimNotify_AnyAllowOverride();

};

