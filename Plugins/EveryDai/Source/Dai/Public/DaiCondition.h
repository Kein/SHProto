#pragma once
#include "CoreMinimal.h"
#include "DaiConditions.h"
#include "DaiNotifies.h"
#include "ENumberCompareOperation.h"
#include "GraphObject.h"
#include "DaiCondition.generated.h"

class AActor;
class IDaiConditionsListenerInterface;
class UDaiConditionsListenerInterface;
class UObject;

UCLASS(Abstract, EditInlineNew)
class DAI_API UDaiCondition : public UGraphObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    bool _InversedCondition;
    
    UPROPERTY(EditAnywhere)
    FDaiNotifies _OnSuccessNotifies;
    
public:
    UDaiCondition();

    UFUNCTION(BlueprintCallable)
    static void RemoveConditionsListener(UPARAM(Ref) FDaiConditions& Conditions, TScriptInterface<IDaiConditionsListenerInterface> Listener);
    
    UFUNCTION(BlueprintCallable)
    static bool performConditions(const FDaiConditions& Conditions, UObject* Context, AActor* caller, bool Debug);
    
    UFUNCTION(BlueprintPure)
    static FString getOperationSymbol(ENumberCompareOperation Operation);
    
    UFUNCTION(BlueprintPure)
    static bool compareInt(ENumberCompareOperation Operation, int32 A, int32 B);
    
    UFUNCTION(BlueprintPure)
    static bool compareFloat(ENumberCompareOperation Operation, float A, float B);
    
    UFUNCTION(BlueprintCallable)
    static void AddConditionsListener(UPARAM(Ref) FDaiConditions& Conditions, TScriptInterface<IDaiConditionsListenerInterface> Listener);
    
};

