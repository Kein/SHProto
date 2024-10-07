#pragma once
#include "CoreMinimal.h"
#include "SaveSlotsListWidget.h"
#include "ESavePointFilterId.h"
#include "GameSaveSlotInfo.h"
#include "SHSaveSlotsListWidget.generated.h"

class UDataTable;
class UWidget;

UCLASS(EditInlineNew)
class USHSaveSlotsListWidget : public USaveSlotsListWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Instanced)
    UWidget* Ask_Panel;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UDataTable* SavePointInfos;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bInAskPanelConfirmOnSaveKey;
    
public:
    USHSaveSlotsListWidget();

protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnSlotHovered(const FGameSaveSlotInfo& SaveSlot) const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void Filter(ESavePointFilterId FilterId) const;
    
};

