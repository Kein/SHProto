#pragma once
#include "CoreMinimal.h"
#include "SHBlendData.h"
#include "SHCombatSubcomponentBase.h"
#include "SHMovementDataStruct.h"
#include "SHStealthModeCmbSubcomp.generated.h"

class UObject;

UCLASS(EditInlineNew)
class SHPROTO_API USHStealthModeCmbSubcomp : public USHCombatSubcomponentBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    FSHMovementDataStruct StealthModeMovementData;
    
    UPROPERTY(Transient)
    FSHBlendData StealthModeFOVBlend;
    
public:
    USHStealthModeCmbSubcomp();

    UFUNCTION(BlueprintCallable)
    void SetStealthModeBlocked(const bool Blocked, const UObject* Object);
    
    UFUNCTION(BlueprintCallable)
    void SetAllowStealthModeWhenBlocked(const bool allow, const UObject* Object);
    
    UFUNCTION(BlueprintPure)
    bool IsStealthModeWhenBlockedAllowed() const;
    
    UFUNCTION(BlueprintPure)
    bool IsStealthModeBlocked() const;
    
    UFUNCTION(BlueprintPure)
    bool IsInStealthMode() const;
    
};

