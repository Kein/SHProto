#pragma once
#include "CoreMinimal.h"
#include "SHCombatSubcomponentBase.h"
#include "SHInputBufferCmbSubcomp.generated.h"

class USHCharacterPlayCombatComponent;

UCLASS(EditInlineNew)
class SHPROTO_API USHInputBufferCmbSubcomp : public USHCombatSubcomponentBase {
    GENERATED_BODY()
public:
    USHInputBufferCmbSubcomp();

    UFUNCTION(Exec)
    void SHDebug_Character_Combat_InputBuffer_ValuesDebug();
    
protected:
    UFUNCTION()
    void ProcessCombatInputModeChangedEvent(USHCharacterPlayCombatComponent* CombatComp);
    
};

