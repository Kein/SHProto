#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "SHGameplayFocusSlotButton.generated.h"

class UButton;
class USHGameplayFocusSlotsWidget;
class UTextBlock;

UCLASS(EditInlineNew)
class USHGameplayFocusSlotButton : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Instanced)
    UButton* ButtonCore;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UTextBlock* ButtonTextBlock;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bIsInputModeEnabled;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bIsMultiItem;
    
protected:
    UPROPERTY(Instanced, Transient)
    USHGameplayFocusSlotsWidget* WidgetOwner;
    
public:
    USHGameplayFocusSlotButton();

    UFUNCTION(BlueprintImplementableEvent)
    void OnSetHighlight(bool Enable);
    
    UFUNCTION()
    void ButtonPressed();
    
};

