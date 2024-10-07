#pragma once
#include "CoreMinimal.h"
#include "SHFXSubcomponent.h"
#include "SHMaterialPropertyControlHandler.h"
#include "SHFXMaterialModifierSubcomp.generated.h"

class UMaterialInstanceDynamic;
class UObject;
class USHFXMaterialModifierSubcompSettings;

UCLASS(Abstract, BlueprintType, EditInlineNew)
class SHPROTO_API USHFXMaterialModifierSubcomp : public USHFXSubcomponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    USHFXMaterialModifierSubcompSettings* Settings;
    
    UPROPERTY(Transient)
    TArray<UMaterialInstanceDynamic*> _DynamicMaterials;
    
    UPROPERTY(Transient)
    TArray<FSHMaterialPropertyControlHandler> MaterialPropertyHandlers;
    
public:
    USHFXMaterialModifierSubcomp();

    UFUNCTION(BlueprintCallable)
    void SetMaterialLayerBlocked(const bool IsBlock, const UObject* Object);
    
    UFUNCTION(BlueprintPure)
    bool IsMaterialLayerBlockedBy(const UObject* Object) const;
    
    UFUNCTION(BlueprintPure)
    bool IsMaterialLayerBlocked() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetDynamicMaterialsCount() const;
    
};

