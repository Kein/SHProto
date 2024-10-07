#pragma once
#include "CoreMinimal.h"
#include "SHInteractionGenericStopData.h"
#include "SHInteractionSlot.h"
#include "SHInteractionGenericSlot.generated.h"

UINTERFACE(meta=(CannotImplementInterfaceInBlueprint))
class USHInteractionGenericSlot : public USHInteractionSlot {
    GENERATED_BODY()
};

class ISHInteractionGenericSlot : public ISHInteractionSlot {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    virtual void ProcessGenericInteractionStop(const FSHInteractionGenericStopData& StopData) PURE_VIRTUAL(ProcessGenericInteractionStop,);
    
};

