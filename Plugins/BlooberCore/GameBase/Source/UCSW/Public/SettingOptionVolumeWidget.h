#pragma once
#include "CoreMinimal.h"
#include "SettingOptionWidget.h"
#include "SettingOptionVolumeWidget.generated.h"

class UBVolumeControl;

UCLASS(EditInlineNew)
class UCSW_API USettingOptionVolumeWidget : public USettingOptionWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Instanced)
    UBVolumeControl* Value_wdg;
    
public:
    USettingOptionVolumeWidget();

};

