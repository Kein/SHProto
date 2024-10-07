#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "SHGameplayMenuSectionsButton.generated.h"

class UButton;
class USHGameplayMenuWidget;
class UTextBlock;

UCLASS(EditInlineNew)
class SHPROTO_API USHGameplayMenuSectionsButton : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Instanced)
    UButton* ButtonCore;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UTextBlock* ButtonTextBlock;
    
protected:
    UPROPERTY(Instanced, Transient)
    USHGameplayMenuWidget* WidgetOwner;
    
public:
    USHGameplayMenuSectionsButton();

    UFUNCTION(BlueprintImplementableEvent)
    void OnSetHighlight(bool Enable);
    
    UFUNCTION()
    void ButtonPressed();
    
};

