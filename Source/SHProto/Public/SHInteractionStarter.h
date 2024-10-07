#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "SHInteractionStarter.generated.h"

class ISHInteraction;
class USHInteraction;
class ISHInteractionSlot;
class USHInteractionSlot;

UINTERFACE(BlueprintType, meta=(CannotImplementInterfaceInBlueprint))
class USHInteractionStarter : public UInterface {
    GENERATED_BODY()
};

class ISHInteractionStarter : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    virtual TScriptInterface<ISHInteractionSlot> TryStartInteraction(const TScriptInterface<ISHInteraction>& Interaction) PURE_VIRTUAL(TryStartInteraction, return NULL;);
    
};

