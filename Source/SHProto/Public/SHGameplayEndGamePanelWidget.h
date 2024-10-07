#pragma once
#include "CoreMinimal.h"
#include "BUserWidget.h"
#include "SimpleDynamicDelegateDelegate.h"
#include "SHGameplayEndGamePanelWidget.generated.h"

UCLASS(EditInlineNew)
class USHGameplayEndGamePanelWidget : public UBUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    bool bIsSkipable;
    
public:
    UPROPERTY(BlueprintAssignable)
    FSimpleDynamicDelegate OnContinue;
    
    USHGameplayEndGamePanelWidget();

    UFUNCTION(BlueprintImplementableEvent)
    void OnShow();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnHide();
    
    UFUNCTION(BlueprintCallable)
    void Continue();
    
};

