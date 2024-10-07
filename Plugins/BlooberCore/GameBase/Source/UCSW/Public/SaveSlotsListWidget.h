#pragma once
#include "CoreMinimal.h"
#include "SaveSlotInfo.h"
#include "InputCoreTypes.h"
#include "BUserWidget.h"
#include "SaveSlotsListWidget.generated.h"

class UImage;
class UUCWListView;
class UWidgetAnimation;

UCLASS(EditInlineNew)
class UCSW_API USaveSlotsListWidget : public UBUserWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSaveSlotEvent, const FSaveSlotInfo&, SaveSlot);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnBackEvent);
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bSaveMode;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bSaveModeNoAuto;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bCustomSaveMethod;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bAutoIsFocusable;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bSortByDate;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FKey> BackKeys;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bAllowDelete;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FKey> DeleteKeys;
    
protected:
    UPROPERTY(BlueprintReadOnly, Instanced)
    UUCWListView* Slots_lv;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UImage* SShot_img;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UWidgetAnimation* ShowAsk_anim;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UWidgetAnimation* ShowSaved_anim;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UWidgetAnimation* ShowAskDelete_anim;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UWidgetAnimation* ShowDeleted_anim;
    
public:
    UPROPERTY(BlueprintAssignable)
    FSaveSlotEvent OnSlotSelected;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FOnBackEvent OnBack;
    
    USaveSlotsListWidget();

    UFUNCTION(BlueprintCallable)
    void Override();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnShow();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnGameSaved();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnGameDeleted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFocus();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnClear();
    
    UFUNCTION(BlueprintCallable)
    void Delete();
    
    UFUNCTION(BlueprintCallable)
    void Cancel();
    
    UFUNCTION(BlueprintImplementableEvent)
    bool AskOverride(const FSaveSlotInfo& SlotInfo);
    
    UFUNCTION(BlueprintImplementableEvent)
    bool AskDelete(const FSaveSlotInfo& SlotInfo);
    
};

