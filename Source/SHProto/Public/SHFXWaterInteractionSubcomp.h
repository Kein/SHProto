#pragma once
#include "CoreMinimal.h"
#include "SHFXSubcomponent.h"
#include "SHXWaterIntersection.h"
#include "SHFXWaterInteractionSubcomp.generated.h"

class UObject;
class USHFXWaterInteractionSubcompSettings;

UCLASS(BlueprintType, EditInlineNew)
class SHPROTO_API USHFXWaterInteractionSubcomp : public USHFXSubcomponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    USHFXWaterInteractionSubcompSettings* Settings;
    
public:
    USHFXWaterInteractionSubcomp();

    UFUNCTION(BlueprintCallable)
    void SetWaterInteractionBlocked(const bool IsBlock, const UObject* Object);
    
    UFUNCTION(BlueprintPure)
    bool IsWaterInteractionBlockedBy(const UObject* Object) const;
    
    UFUNCTION(BlueprintPure)
    bool IsWaterInteractionBlocked() const;
    
    UFUNCTION(BlueprintPure)
    TArray<FSHXWaterIntersection> GetCurrentIntersections() const;
    
};

