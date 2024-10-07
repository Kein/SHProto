#pragma once
#include "CoreMinimal.h"
#include "ScriptDaiCondition.h"
#include "ScriptFlowCondition.generated.h"

UCLASS(Abstract, EditInlineNew)
class DIALOG_API UScriptFlowCondition : public UScriptDaiCondition {
    GENERATED_BODY()
public:
    UScriptFlowCondition();

};

