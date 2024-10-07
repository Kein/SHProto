#pragma once
#include "CoreMinimal.h"
#include "DaiParam.h"
#include "ScriptDaiParam.generated.h"

class AActor;
class UObject;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class DAI_API UScriptDaiParam : public UDaiParam {
    GENERATED_BODY()
public:
    UScriptDaiParam();

    UFUNCTION(BlueprintNativeEvent)
    void ScriptUpdate(UObject* Context, AActor* Actor);
    
    UFUNCTION(BlueprintImplementableEvent)
    FString ScriptToString() const;
    
};

