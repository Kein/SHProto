#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "UCWSelectedStateChangedBaseDelegate.h"
#include "UCWButtonBase.generated.h"

UCLASS(Abstract, EditInlineNew)
class UCW_API UUCWButtonBase : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 Blocked: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bSelectable: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bShouldSelectUponReceivingFocus: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bInteractableWhenSelected: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bToggleable: 1;
    
    UPROPERTY(BlueprintAssignable)
    FUCWSelectedStateChangedBase OnSelectedChanged;
    
public:
    UUCWButtonBase();

protected:
    UFUNCTION(BlueprintCallable)
    void SetSelectedInternal(bool bInSelected, bool bAllowSound, bool bBroadcast);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetIsToggleable(bool bInIsToggleable);
    
    UFUNCTION(BlueprintCallable)
    void SetIsSelected(bool InSelected, bool bGiveClickFeedback);
    
    UFUNCTION(BlueprintCallable)
    void SetIsSelectable(bool bInIsSelectable);
    
    UFUNCTION(BlueprintCallable)
    void SetIsLocked(bool bInIsLocked);
    
    UFUNCTION(BlueprintCallable)
    void SetIsInteractionEnabled(bool bInIsInteractionEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetIsInteractableWhenSelected(bool bInInteractableWhenSelected);
    
    UFUNCTION(BlueprintCallable)
    void SetIsFocusable(bool bInIsFocusable);
    
    UFUNCTION(BlueprintPure)
    bool IsInteractionEnabled() const;
    
    UFUNCTION(BlueprintPure)
    bool IsFocusable() const;
    
    UFUNCTION(BlueprintPure)
    bool GetSelected() const;
    
    UFUNCTION(BlueprintPure)
    bool GetLocked() const;
    
    UFUNCTION(BlueprintCallable)
    void ClearSelection();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void BP_OnSelected();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_OnLockedChanged(bool bIsLocked);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_OnEnabled();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_OnDisabled();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_OnDeselected();
    
};

