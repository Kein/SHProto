#pragma once
#include "CoreMinimal.h"
#include "EFoot.h"
#include "SHFXSubcomponent.h"
#include "SHFXPukePuddleDamageSubcomp.generated.h"

class ABeingFootstep;
class ASHPukePuddleBase;
class UObject;
class USHFXPukePuddleDamageSubcompSettings;

UCLASS(BlueprintType, EditInlineNew)
class SHPROTO_API USHFXPukePuddleDamageSubcomp : public USHFXSubcomponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    USHFXPukePuddleDamageSubcompSettings* Settings;
    
    UPROPERTY(Transient)
    TArray<ASHPukePuddleBase*> _PukePuddles;
    
public:
    USHFXPukePuddleDamageSubcomp();

    UFUNCTION(BlueprintCallable)
    void SetPuddleDamageBlocked(const bool IsBlock, const UObject* Object);
    
protected:
    UFUNCTION()
    void ProcessFootstep(EFoot foot, ABeingFootstep* Footstep);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsPuddleDamageBlockedBy(const UObject* Object) const;
    
    UFUNCTION(BlueprintPure)
    bool IsPuddleDamageBlocked() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetPukePuddlesCount() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetPukeActivePuddlesCount() const;
    
};

