#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "GenericSettingsPanelWidget.h"
#include "ControlsSettingsPanelWidget.generated.h"

UCLASS(Abstract, EditInlineNew)
class UCSW_API UControlsSettingsPanelWidget : public UGenericSettingsPanelWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditInstanceOnly)
    TArray<FKey> BlackListKeys;
    
    UPROPERTY(BlueprintReadOnly, EditInstanceOnly)
    TArray<FKey> NotHoldableKeys;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bUnbindOnConflict;
    
public:
    UControlsSettingsPanelWidget();

    UFUNCTION(BlueprintPure)
    bool HasEmptyBinds() const;
    
    UFUNCTION(BlueprintPure)
    bool HasConflicts() const;
    
};

