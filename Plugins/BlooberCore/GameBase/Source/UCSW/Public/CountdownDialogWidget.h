#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "BUserWidget.h"
#include "SimpleDynamicDelegateDelegate.h"
#include "CountdownDialogWidget.generated.h"

class UBButton;

UCLASS(EditInlineNew)
class UCountdownDialogWidget : public UBUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FKey> ConfirmKeys;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FKey> CancelKeys;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UBButton* Confirm_but;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UBButton* Cancel_but;
    
    UPROPERTY(BlueprintReadOnly, EditInstanceOnly)
    int32 CountNumber;
    
    UPROPERTY(BlueprintReadOnly)
    int32 Counter;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FSimpleDynamicDelegate OnConfirm;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FSimpleDynamicDelegate OnCancel;
    
    UCountdownDialogWidget();

    UFUNCTION(BlueprintCallable)
    void Show();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnUpdate(int32 _Counter);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnShow();
    
    UFUNCTION(BlueprintCallable)
    void Confirm();
    
    UFUNCTION(BlueprintCallable)
    void Cancel();
    
};

