#pragma once
#include "CoreMinimal.h"
#include "SHFXSubcomponent.h"
#include "SHFXPukeExplosionSubcomp.generated.h"

class USHFXPukeExplosionSubcompSettings;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class SHPROTO_API USHFXPukeExplosionSubcomp : public USHFXSubcomponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    USHFXPukeExplosionSubcompSettings* Settings;
    
public:
    USHFXPukeExplosionSubcomp();

    UFUNCTION(BlueprintCallable)
    void StartPukeExplosion();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnPukeExplosion();
    
};

