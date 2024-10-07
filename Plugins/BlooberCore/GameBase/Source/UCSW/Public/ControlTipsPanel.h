#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ControlTipsData.h"
#include "Templates/SubclassOf.h"
#include "ControlTipsPanel.generated.h"

class UControlTipWidget;
class UDataTable;
class UGameTextsConfig;
class UPanelWidget;
class UUE4KeyTexts;
class UWidgetAnimation;

UCLASS(EditInlineNew)
class UCSW_API UControlTipsPanel : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Instanced)
    UPanelWidget* Tips_box;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* Tips;
    
    UPROPERTY(EditDefaultsOnly)
    UUE4KeyTexts* KeyTexts;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UControlTipWidget> TipWidgetClass;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool SuportVisibilitySettings;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float VisibilityTime;
    
    UPROPERTY(EditDefaultsOnly)
    UGameTextsConfig* GameTextsConfig;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UWidgetAnimation* FadeOut_anim;
    
    UPROPERTY(Instanced, Transient)
    TArray<UControlTipWidget*> TipWidgets;
    
public:
    UControlTipsPanel();

    UFUNCTION(BlueprintCallable)
    void Update(const FControlTipsData& Config);
    
    UFUNCTION(BlueprintCallable)
    void SetTips4Test(const TArray<FName>& WantedTips, const FControlTipsData& Config);
    
    UFUNCTION(BlueprintCallable)
    void SetTips(const TArray<FName>& wantedTooltips);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnSetTips();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnResetVisibility();
    
    UFUNCTION()
    void OnInputDeviceChanged();
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void OnFadeStoped();
    
};

