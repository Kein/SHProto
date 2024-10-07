#pragma once
#include "CoreMinimal.h"
#include "DaiCondition.h"
#include "ScriptDaiCondition.generated.h"

class AActor;
class UObject;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class DAI_API UScriptDaiCondition : public UDaiCondition {
    GENERATED_BODY()
public:
    UScriptDaiCondition();

    UFUNCTION(BlueprintImplementableEvent)
    FString ScriptToString() const;
    
    UFUNCTION(BlueprintImplementableEvent)
    bool ScriptPerformCondition(UObject* Context, AActor* caller);
    
};

