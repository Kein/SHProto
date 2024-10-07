#pragma once
#include "CoreMinimal.h"
#include "BUserWidget.h"
#include "GenericSettingsPanelWidget.generated.h"

UCLASS(Abstract, EditInlineNew)
class UCSW_API UGenericSettingsPanelWidget : public UBUserWidget {
    GENERATED_BODY()
public:
    UGenericSettingsPanelWidget();

    UFUNCTION(BlueprintCallable)
    void Show();
    
    UFUNCTION(BlueprintCallable)
    void Revert();
    
    UFUNCTION(BlueprintCallable)
    void Reset();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnUpdateView();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnShow();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnRevert();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnReset();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnHide();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnApply();
    
    UFUNCTION(BlueprintPure)
    bool IsOptionsChanged() const;
    
    UFUNCTION(BlueprintCallable)
    void Hide();
    
};

