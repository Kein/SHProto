#pragma once
#include "CoreMinimal.h"
#include "MainMenuWidget.h"
#include "UCSWMainMenuWidget.generated.h"

class USaveSlotsListWidget;

UCLASS(Abstract, EditInlineNew)
class UCSW_API UUCSWMainMenuWidget : public UMainMenuWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Instanced)
    USaveSlotsListWidget* SlotsList_wdg;
    
public:
    UUCSWMainMenuWidget();

};

