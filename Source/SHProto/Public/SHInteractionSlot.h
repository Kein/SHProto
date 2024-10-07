#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "SHInteractionSlot.generated.h"

class ISHInteraction;
class USHInteraction;

UINTERFACE(BlueprintType, meta=(CannotImplementInterfaceInBlueprint))
class USHInteractionSlot : public UInterface {
    GENERATED_BODY()
};

class ISHInteractionSlot : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    virtual bool ProcessInteractionRequest(const TScriptInterface<ISHInteraction>& Interaction) PURE_VIRTUAL(ProcessInteractionRequest, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual bool HasInteraction() const PURE_VIRTUAL(HasInteraction, return false;);
    
};

