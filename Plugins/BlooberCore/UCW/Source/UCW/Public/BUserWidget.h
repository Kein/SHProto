#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "BUserWidget.generated.h"

UCLASS(EditInlineNew)
class UCW_API UBUserWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UBUserWidget();

    UFUNCTION(BlueprintCallable)
    void UnBlockInput();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnInputDeviceChanged();
    
    UFUNCTION(BlueprintCallable)
    void InputDeviceChanged();
    
    UFUNCTION(BlueprintCallable)
    void BlockInput();
    
};

