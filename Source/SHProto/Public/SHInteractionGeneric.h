#pragma once
#include "CoreMinimal.h"
#include "SHInteraction.h"
#include "SHInteractionGenericConfig.h"
#include "SHInteractionGenericStopData.h"
#include "SHInteractionGeneric.generated.h"

class USHInteractionGenericComponent;

UINTERFACE(meta=(CannotImplementInterfaceInBlueprint))
class USHInteractionGeneric : public USHInteraction {
    GENERATED_BODY()
};

class ISHInteractionGeneric : public ISHInteraction {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    virtual void StopGenericInteraction(const FSHInteractionGenericStopData& StopData) PURE_VIRTUAL(StopGenericInteraction,);
    
    UFUNCTION(BlueprintCallable)
    virtual FSHInteractionGenericConfig GetGenericConfig() const PURE_VIRTUAL(GetGenericConfig, return FSHInteractionGenericConfig{};);
    
    UFUNCTION(BlueprintCallable)
    virtual USHInteractionGenericComponent* GetGeneric() PURE_VIRTUAL(GetGeneric, return NULL;);
    
};

