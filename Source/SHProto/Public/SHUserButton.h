#pragma once
#include "CoreMinimal.h"
#include "SimpleDynamicDelegateDelegate.h"
#include "Components/Button.h"
#include "Components/Button.h"
#include "Blueprint/UserWidget.h"
#include "OnShowDescriptionEventDelegate.h"
#include "SHUserButton.generated.h"

class UBButton;
class UTextLayoutWidget;

UCLASS(EditInlineNew)
class USHUserButton : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly)
    uint8 Blocked: 1;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    UBButton* Root_but;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    UTextLayoutWidget* Label_wdg;
    
    UPROPERTY(EditAnywhere)
    FText DisplayName;
    
    UPROPERTY(EditAnywhere)
    FText Description;
    
    UPROPERTY(EditAnywhere)
    FText InactiveDescription;
    
    UPROPERTY(BlueprintAssignable)
    FOnButtonClickedEvent OnClicked;
    
    UPROPERTY(BlueprintAssignable)
    FOnButtonHoverEvent OnHovered;
    
    UPROPERTY(BlueprintAssignable)
    FOnButtonHoverEvent OnUnhovered;
    
    UPROPERTY(BlueprintAssignable)
    FOnShowDescriptionEvent OnShowDescription;
    
    UPROPERTY(BlueprintAssignable)
    FSimpleDynamicDelegate OnHideDescription;
    
public:
    USHUserButton();

    UFUNCTION(BlueprintCallable)
    void SetLocked(bool bInIsLocked);
    
    UFUNCTION(BlueprintCallable)
    void SetDisplayName(const FText& Text);
    
    UFUNCTION(BlueprintPure)
    bool IsLocked() const;
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void BP_OnLockedChanged(bool bIsLocked);
    
};

