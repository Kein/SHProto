#pragma once
#include "CoreMinimal.h"
#include "SettingsPanelWidget.h"
#include "SHGammaSettingsPanelWidget.generated.h"

class UImage;

UCLASS(EditInlineNew)
class USHGammaSettingsPanelWidget : public USettingsPanelWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Instanced)
    UImage* GammaView_img;
    
public:
    USHGammaSettingsPanelWidget();

};

