#pragma once
#include "CoreMinimal.h"
#include "SHFXSubcomponent.h"
#include "SHFXBleedingSubcomp.generated.h"

class UObject;
class USHFXBleedingSubcompSettings;

UCLASS(BlueprintType, EditInlineNew)
class SHPROTO_API USHFXBleedingSubcomp : public USHFXSubcomponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    USHFXBleedingSubcompSettings* Settings;
    
public:
    USHFXBleedingSubcomp();

    UFUNCTION(BlueprintCallable)
    void SetBleedingBlocked(const bool IsBlock, const UObject* Object);
    
    UFUNCTION(BlueprintPure)
    bool IsBleedingBlockedBy(const UObject* Object) const;
    
    UFUNCTION(BlueprintPure)
    bool IsBleedingBlocked() const;
    
};

