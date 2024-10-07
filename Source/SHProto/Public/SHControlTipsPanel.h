#pragma once
#include "CoreMinimal.h"
#include "Styling/SlateBrush.h"
#include "ControlTipsPanel.h"
#include "SHControlTipsPanel.generated.h"

class UBorder;
class UWidget;

UCLASS(EditInlineNew)
class USHControlTipsPanel : public UControlTipsPanel {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Instanced)
    UWidget* Main_panel;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UBorder* Background_border;
    
    UPROPERTY(BlueprintReadOnly)
    FSlateBrush BackgroundBrush;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSlateBrush EmptyBkgrBrush;
    
public:
    USHControlTipsPanel();

    UFUNCTION(BlueprintCallable)
    void ShowBackground(bool NewShow);
    
    UFUNCTION(BlueprintCallable)
    void Show(const TArray<FName>& wantedTooltips, bool WithBackground, bool UseVisibilitySettings);
    
    UFUNCTION(BlueprintCallable)
    void Hide();
    
};

