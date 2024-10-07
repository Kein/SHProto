#pragma once
#include "CoreMinimal.h"
#include "SettingOptionWidget.h"
#include "SettingOptionSpinBoxWidget.generated.h"

class UBSpinBox;

UCLASS(EditInlineNew)
class UCSW_API USettingOptionSpinBoxWidget : public USettingOptionWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Instanced)
    UBSpinBox* Value_wdg;
    
public:
    USettingOptionSpinBoxWidget();

};

