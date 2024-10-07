#pragma once
#include "CoreMinimal.h"
#include "UE4InputHandle.h"
#include "Blueprint/UserWidget.h"
#include "Templates/SubclassOf.h"
#include "InputBindingOptionsBox.generated.h"

class UInputBindingOptionWidget;
class UPanelWidget;
class UWidget;

UCLASS(EditInlineNew)
class UCSW_API UInputBindingOptionsBox : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TSubclassOf<UInputBindingOptionWidget> OptionWidgetClass;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool bButtonsOnly;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool bColumn1ButtonsOnly;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool bColumn2ButtonsOnly;
    
    UPROPERTY(BlueprintReadOnly, EditInstanceOnly)
    TArray<FUE4InputHandle> Options;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UPanelWidget* Options_panel;
    
public:
    UInputBindingOptionsBox();

    UFUNCTION(BlueprintPure)
    UWidget* GetLastChild() const;
    
    UFUNCTION(BlueprintPure)
    UWidget* GetFirstChild() const;
    
};

