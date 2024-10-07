#pragma once
#include "CoreMinimal.h"
#include "SHCombatSubcomponentBase.h"
#include "SHStruggleCmbSubcomp.generated.h"

class USHStruggleCmbSubcompSettings;

UCLASS(EditInlineNew)
class SHPROTO_API USHStruggleCmbSubcomp : public USHCombatSubcomponentBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    USHStruggleCmbSubcompSettings* ComponentSettings;
    
public:
    USHStruggleCmbSubcomp();

};

