#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UObject/NoExportTypes.h"
#include "EGameBaseInputDevice.h"
#include "SHManagedInteractionSlotCleanupConfig.h"
#include "SHInteraction.generated.h"

class ISHInteractionSlot;
class USHInteractionSlot;

UINTERFACE(BlueprintType, meta=(CannotImplementInterfaceInBlueprint))
class USHInteraction : public UInterface {
    GENERATED_BODY()
};

class ISHInteraction : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    virtual bool TryStartInteraction(const TScriptInterface<ISHInteractionSlot>& InteractionSlot) PURE_VIRTUAL(TryStartInteraction, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual void ProcessInput(const FVector2D& Input, const EGameBaseInputDevice& InputDevice) PURE_VIRTUAL(ProcessInput,);
    
    UFUNCTION(BlueprintCallable)
    virtual bool IsOverridingCleanupConfig() const PURE_VIRTUAL(IsOverridingCleanupConfig, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual bool IsInteractionActive() const PURE_VIRTUAL(IsInteractionActive, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual FSHManagedInteractionSlotCleanupConfig GetCleanupConfig() const PURE_VIRTUAL(GetCleanupConfig, return FSHManagedInteractionSlotCleanupConfig{};);
    
};

