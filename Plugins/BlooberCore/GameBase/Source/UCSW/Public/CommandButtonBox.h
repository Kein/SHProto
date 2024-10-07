#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "CommandText.h"
#include "Templates/SubclassOf.h"
#include "CommandButtonBox.generated.h"

class UCommandButtonWidget;
class UPanelWidget;

UCLASS(EditInlineNew)
class UCSW_API UCommandButtonBox : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UCommandButtonWidget> ButtonWidgetClass;
    
    UPROPERTY(EditAnywhere)
    TArray<FCommandText> Commands;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UPanelWidget* Content_panel;
    
public:
    UCommandButtonBox();

};

