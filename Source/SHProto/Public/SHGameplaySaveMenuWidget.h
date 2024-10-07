#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "EffectHandle.h"
#include "BUserWidget.h"
#include "SHGameplaySaveMenuWidget.generated.h"

class ASHCharacterPlay;
class ASHSavePoint;
class UBButton;
class UCanvasPanel;
class USHSaveSlotsListWidget;
class UWidgetAnimation;

UCLASS(EditInlineNew)
class USHGameplaySaveMenuWidget : public UBUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FKey> BackKeys;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FKey> SaveKeys;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bShowTooltips;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UCanvasPanel* MainCanvas;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    USHSaveSlotsListWidget* SlotsList_wdg;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UBButton* Back_but;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UBButton* Save_but;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UWidgetAnimation* Setup;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UWidgetAnimation* FadeIn;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UWidgetAnimation* FadeOut;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UWidgetAnimation* ShowSaved;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FEffectHandle LightEffect;
    
protected:
    UPROPERTY(Transient)
    ASHCharacterPlay* OwnerCharacter;
    
    UPROPERTY(Transient)
    ASHSavePoint* ActualSavePoint;
    
public:
    USHGameplaySaveMenuWidget();

    UFUNCTION(BlueprintCallable)
    bool PlayShow();
    
    UFUNCTION(BlueprintCallable)
    bool PlaySetup(ASHSavePoint* SavePoint);
    
    UFUNCTION(BlueprintCallable)
    bool PlayHide();
    
    UFUNCTION(BlueprintPure)
    bool IsAvailable() const;
    
    UFUNCTION(BlueprintCallable)
    bool HideInstant();
    
};

