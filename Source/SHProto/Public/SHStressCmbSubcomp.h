#pragma once
#include "CoreMinimal.h"
#include "SHCombatSubcomponentBase.h"
#include "SHStressCmbSubcomp.generated.h"

class ASHItemWeapon;
class USHRangedCmbSubcomp;
class USHStressCmbSubcompSettings;

UCLASS(EditInlineNew)
class SHPROTO_API USHStressCmbSubcomp : public USHCombatSubcomponentBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    USHStressCmbSubcompSettings* Settings;
    
public:
    USHStressCmbSubcomp();

protected:
    UFUNCTION()
    void ProcessRangedFireSuccess(USHRangedCmbSubcomp* RangedCombatSubcomponent, ASHItemWeapon* ItemWeaponContext);
    
};

