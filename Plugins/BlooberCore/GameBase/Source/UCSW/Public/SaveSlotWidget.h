#pragma once
#include "CoreMinimal.h"
#include "SaveSlotInfo.h"
#include "Blueprint/UserWidget.h"
#include "SaveSlotWidget.generated.h"

class UBButton;

UCLASS(EditInlineNew)
class UCSW_API USaveSlotWidget : public UUserWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSaveSlotEvent, const FSaveSlotInfo&, Info);
    
    UPROPERTY(BlueprintReadOnly)
    FSaveSlotInfo SlotInfo;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    UBButton* Slot_but;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FSaveSlotEvent OnClicked;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FSaveSlotEvent OnFocused;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FSaveSlotEvent OnUnfocused;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FSaveSlotEvent OnHovered;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FSaveSlotEvent OnUnhovered;
    
    USaveSlotWidget();

    UFUNCTION(BlueprintImplementableEvent)
    void OnTextChanged(const FText& Text);
    
};

