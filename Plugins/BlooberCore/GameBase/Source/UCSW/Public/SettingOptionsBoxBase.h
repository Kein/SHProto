#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Templates/SubclassOf.h"
#include "SettingOptionsBoxBase.generated.h"

class UPanelWidget;
class USettingOptionCheckboxWidget;
class USettingOptionSliderWidget;
class USettingOptionSpinBoxWidget;
class USettingOptionVolumeWidget;
class UWidget;

UCLASS(Abstract, EditInlineNew)
class UCSW_API USettingOptionsBoxBase : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSubclassOf<USettingOptionSpinBoxWidget> SpinBoxWidgetClass;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<USettingOptionCheckboxWidget> CheckboxWidgetClass;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<USettingOptionSliderWidget> SliderWidgetClass;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<USettingOptionVolumeWidget> VolumeWidgetClass;
    
    UPROPERTY(EditAnywhere)
    bool bHideIfNoOptions;
    
protected:
    UPROPERTY(BlueprintReadOnly, Instanced)
    UPanelWidget* Options_panel;
    
public:
    USettingOptionsBoxBase();

    UFUNCTION(BlueprintPure)
    UWidget* GetLastChild() const;
    
    UFUNCTION(BlueprintPure)
    UWidget* GetFirstChild() const;
    
};

