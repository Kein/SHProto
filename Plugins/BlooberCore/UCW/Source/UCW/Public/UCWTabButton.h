#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UCWButtonBase.h"
#include "UCWTabButton.generated.h"

class UBButton;
class UUCWButtonStyle;

UCLASS(Abstract, EditInlineNew)
class UCW_API UUCWTabButton : public UUCWButtonBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UUCWButtonStyle> NormalWidgetStyle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UUCWButtonStyle> SelectedWidgetStyle;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UBButton* Root_but;
    
public:
    UUCWTabButton();

    UFUNCTION(BlueprintImplementableEvent)
    void OnTextChanged(const FText& Text);
    
};

