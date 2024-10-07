#pragma once
#include "CoreMinimal.h"
#include "SettingOptionWidget.h"
#include "SettingOptionSliderWidget.generated.h"

class UBSlider;

UCLASS(EditInlineNew)
class UCSW_API USettingOptionSliderWidget : public USettingOptionWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Instanced)
    UBSlider* Value_wdg;
    
public:
    USettingOptionSliderWidget();

protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnFValueChanged(float Value, bool WasChanged) const;
    
};

