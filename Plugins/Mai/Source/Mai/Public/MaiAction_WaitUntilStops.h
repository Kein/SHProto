#pragma once
#include "CoreMinimal.h"
#include "MaiAction.h"
#include "MaiAction_WaitUntilStops.generated.h"

class UMaiAction_WaitUntilStops;
class UObject;

UCLASS(EditInlineNew)
class MAI_API UMaiAction_WaitUntilStops : public UMaiAction {
    GENERATED_BODY()
public:
    UMaiAction_WaitUntilStops();

    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UMaiAction_WaitUntilStops* createActionWaitUntilStops(UObject* WorldContextObject);
    
};

