#pragma once
#include "CoreMinimal.h"
#include "SHCombatSubcomponentBase.h"
#include "SHEffectsCmbSubcomp.generated.h"

class UMaterialInstanceDynamic;

UCLASS(EditInlineNew)
class SHPROTO_API USHEffectsCmbSubcomp : public USHCombatSubcomponentBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    UMaterialInstanceDynamic* DynamicMaterial;
    
public:
    USHEffectsCmbSubcomp();

};

