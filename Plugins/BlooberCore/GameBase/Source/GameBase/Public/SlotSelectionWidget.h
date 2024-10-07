#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "SaveSlotInfo.h"
#include "SlotSelectionWidget.generated.h"

UCLASS(EditInlineNew)
class GAMEBASE_API USlotSelectionWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool CreateScreenshootsTexture;
    
public:
    USlotSelectionWidget();

    UFUNCTION(BlueprintPure)
    int32 GetTheNewestSlotIndex() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetSlotsCount() const;
    
    UFUNCTION(BlueprintPure)
    TArray<FSaveSlotInfo> GetSlotList() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void GenerateSlotList();
    
public:
    UFUNCTION(BlueprintCallable)
    void Continue(int32 selectedSlot, bool ClearSlot);
    
};

