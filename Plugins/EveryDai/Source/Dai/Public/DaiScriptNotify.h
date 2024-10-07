#pragma once
#include "CoreMinimal.h"
#include "DaiNotify.h"
#include "DaiScriptNotify.generated.h"

class AActor;
class UObject;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class DAI_API UDaiScriptNotify : public UDaiNotify {
    GENERATED_BODY()
public:
    UDaiScriptNotify();

    UFUNCTION(BlueprintImplementableEvent)
    FString ScriptToString() const;
    
    UFUNCTION(BlueprintImplementableEvent)
    bool ScriptPerformNotify(UObject* Context, AActor* caller);
    
};

