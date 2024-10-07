#pragma once
#include "CoreMinimal.h"
#include "SHCombatSubcomponentBase.h"
#include "SHRangedAutoAimCmbSubcomp.generated.h"

class USHRangedAutoAimCmbSubcompSettings;

UCLASS(EditInlineNew)
class SHPROTO_API USHRangedAutoAimCmbSubcomp : public USHCombatSubcomponentBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    USHRangedAutoAimCmbSubcompSettings* Settings;
    
public:
    USHRangedAutoAimCmbSubcomp();

protected:
    UFUNCTION(Exec)
    void SHDebug_Character_Combat_AutoAim_Magnet_ValuesDebug();
    
    UFUNCTION(Exec)
    void SHDebug_Character_Combat_AutoAim_Magnet_DrawDebug();
    
};

