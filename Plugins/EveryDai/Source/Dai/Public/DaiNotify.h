#pragma once
#include "CoreMinimal.h"
#include "DaiConditions.h"
#include "DaiNotifies.h"
#include "GraphObject.h"
#include "DaiNotify.generated.h"

class AActor;
class UObject;

UCLASS(Abstract, EditInlineNew)
class DAI_API UDaiNotify : public UGraphObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    FDaiConditions _Conditions;
    
public:
    UDaiNotify();

    UFUNCTION(BlueprintCallable)
    static bool performNotifies(const FDaiNotifies& Conditions, UObject* Context, AActor* caller, bool Debug);
    
};

