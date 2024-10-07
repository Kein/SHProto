#pragma once
#include "CoreMinimal.h"
#include "SettingOptionWidget.h"
#include "SettingOptionCheckboxWidget.generated.h"

class UBCheckBox;

UCLASS(EditInlineNew)
class UCSW_API USettingOptionCheckboxWidget : public USettingOptionWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Instanced)
    UBCheckBox* Value_wdg;
    
public:
    USettingOptionCheckboxWidget();

protected:
    UFUNCTION(BlueprintPure)
    FText GetValueText() const;
    
};

