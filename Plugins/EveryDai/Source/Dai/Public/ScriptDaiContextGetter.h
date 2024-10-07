#pragma once
#include "CoreMinimal.h"
#include "DaiContextGetter.h"
#include "ScriptDaiContextGetter.generated.h"

class AActor;
class UObject;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class DAI_API UScriptDaiContextGetter : public UDaiContextGetter {
    GENERATED_BODY()
public:
    UScriptDaiContextGetter();

    UFUNCTION(BlueprintImplementableEvent)
    UObject* ScriptProvideSingleObject(UObject* Context, AActor* caller) const;
    
    UFUNCTION(BlueprintImplementableEvent)
    TArray<UObject*> ScriptProvideObjectSet(UObject* Context, AActor* caller) const;
    
    UFUNCTION(BlueprintImplementableEvent)
    FString ScriptGetDescription() const;
    
};

