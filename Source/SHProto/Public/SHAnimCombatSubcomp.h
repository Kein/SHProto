#pragma once
#include "CoreMinimal.h"
#include "SHAnimSubcomponentBase.h"
#include "SHAnimCombatSubcomp.generated.h"

class USHAnimMontagePlayer;

UCLASS(BlueprintType, EditInlineNew)
class SHPROTO_API USHAnimCombatSubcomp : public USHAnimSubcomponentBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Transient)
    USHAnimMontagePlayer* ReciveHit;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    USHAnimMontagePlayer* WeaponShow;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    USHAnimMontagePlayer* WeaponHide;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    USHAnimMontagePlayer* WeaponChange;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    USHAnimMontagePlayer* Attack;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    USHAnimMontagePlayer* RangedFire;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    USHAnimMontagePlayer* RangedReload;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    USHAnimMontagePlayer* Dodge;
    
public:
    USHAnimCombatSubcomp();

};

