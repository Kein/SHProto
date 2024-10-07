#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "RebindingViewWidget.generated.h"

class UUE4KeyTexts;

UCLASS(EditInlineNew)
class UCSW_API URebindingViewWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    UUE4KeyTexts* KeyTexts;
    
public:
    URebindingViewWidget();

    UFUNCTION(BlueprintCallable)
    void Show();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInputDeviceChanged();
    
public:
    UFUNCTION(BlueprintCallable)
    void Hide();
    
};

