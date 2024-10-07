#pragma once
#include "CoreMinimal.h"
#include "NamedHandle.h"
#include "Blueprint/UserWidget.h"
#include "SettingOptionWidget.generated.h"

class UBButton;

UCLASS(Abstract, EditInlineNew)
class UCSW_API USettingOptionWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Instanced)
    UBButton* Inactive_but;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FNamedHandle OptionHandle;
    
public:
    USettingOptionWidget();

protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnValueChanged(int32 Value, bool WasChanged) const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnLabelTextChanged(const FText& Text);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnActivated(bool IsActive) const;
    
public:
    UFUNCTION(BlueprintPure)
    bool IsChanged() const;
    
};

