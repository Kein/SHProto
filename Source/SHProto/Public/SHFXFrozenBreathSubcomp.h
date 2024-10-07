#pragma once
#include "CoreMinimal.h"
#include "SHFXSubcomponent.h"
#include "SHFXFrozenBreathSubcomp.generated.h"

class UNiagaraComponent;
class UObject;
class USHFXFrozenBreathSubcompSettings;

UCLASS(BlueprintType, EditInlineNew)
class SHPROTO_API USHFXFrozenBreathSubcomp : public USHFXSubcomponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    USHFXFrozenBreathSubcompSettings* Settings;
    
    UPROPERTY(Instanced, Transient)
    UNiagaraComponent* FrozenBreathComponent;
    
public:
    USHFXFrozenBreathSubcomp();

    UFUNCTION(BlueprintCallable)
    void SetFrozenBreathBlocked(const bool IsBlock, const UObject* Object);
    
    UFUNCTION(BlueprintPure)
    bool IsInFreezingZone() const;
    
    UFUNCTION(BlueprintPure)
    bool IsFrozenBreathBlockedBy(const UObject* Object) const;
    
    UFUNCTION(BlueprintPure)
    bool IsFrozenBreathBlocked() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetFreezingVolumesCount() const;
    
};

