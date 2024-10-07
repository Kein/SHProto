#pragma once
#include "CoreMinimal.h"
#include "Blueprint/IUserObjectListEntry.h"
#include "Blueprint/UserWidget.h"
#include "UCWListEntryWidget.generated.h"

UCLASS(Abstract, EditInlineNew)
class UCW_API UUCWListEntryWidget : public UUserWidget, public IUserObjectListEntry {
    GENERATED_BODY()
public:
    UUCWListEntryWidget();

protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnUnhovered();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnHovered();
    

    // Fix for true pure virtual functions not being implemented
};

