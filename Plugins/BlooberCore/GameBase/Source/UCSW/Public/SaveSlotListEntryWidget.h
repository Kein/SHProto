#pragma once
#include "CoreMinimal.h"
#include "SaveSlotInfo.h"
#include "UCWListEntryWidget.h"
#include "SaveSlotListEntryWidget.generated.h"

UCLASS(Abstract, EditInlineNew)
class UCSW_API USaveSlotListEntryWidget : public UUCWListEntryWidget {
    GENERATED_BODY()
public:
    USaveSlotListEntryWidget();

protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnRefresh();
    
    UFUNCTION(BlueprintPure)
    FSaveSlotInfo GetSlotInfo() const;
    
};

