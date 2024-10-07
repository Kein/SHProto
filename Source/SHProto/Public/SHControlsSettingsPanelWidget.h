#pragma once
#include "CoreMinimal.h"
#include "UE4InputHandle.h"
#include "ControlsSettingsPanelWidget.h"
#include "SHControlsSettingsPanelWidget.generated.h"

UCLASS(EditInlineNew)
class USHControlsSettingsPanelWidget : public UControlsSettingsPanelWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FUE4InputHandle RangeAimAction;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FUE4InputHandle FireAction;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FUE4InputHandle MeleeAttackAction;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FUE4InputHandle BoatLeftAction;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FUE4InputHandle BoatRightAction;
    
public:
    USHControlsSettingsPanelWidget();

};

