#pragma once
#include "CoreMinimal.h"
#include "SimpleDynamicDelegateDelegate.h"
#include "ExtraSettingsPanelWidget.h"
#include "UCSWStartGameSettingsPanel.generated.h"

class UBButton;

UCLASS(EditInlineNew)
class UUCSWStartGameSettingsPanel : public UExtraSettingsPanelWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditInstanceOnly)
    bool bIsExtraPanel;
    
    UPROPERTY(EditInstanceOnly)
    bool bDefaultFocusContinue;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UBButton* Continue_but;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FSimpleDynamicDelegate K2_OnContinue;
    
    UUCSWStartGameSettingsPanel();

    UFUNCTION(BlueprintCallable)
    void Continue();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_OnContinue();
    
};

