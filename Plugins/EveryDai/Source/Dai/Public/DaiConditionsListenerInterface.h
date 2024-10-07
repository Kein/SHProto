#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "DaiConditionsListenerInterface.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UDaiConditionsListenerInterface : public UInterface {
    GENERATED_BODY()
};

class IDaiConditionsListenerInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintImplementableEvent)
    void OnConditionSuccess();
    
};

