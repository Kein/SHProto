#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "SHGameplayInventorySlider.generated.h"

class ASHCharacterPlay;
class UAkAudioEvent;
class UImage;
class UTextBlock;
class UTexture;
class UWidget;
class UWidgetAnimation;

UCLASS(EditInlineNew)
class USHGameplayInventorySlider : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bAllowLoopItems;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bShowNewCollectedItemIndicator;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditDefaultsOnly)
    UTexture* DebugTexture;
    
    UPROPERTY(EditDefaultsOnly)
    UAkAudioEvent* AudioEvent_MoveItem;
    
    UPROPERTY(EditDefaultsOnly)
    UAkAudioEvent* AudioEvent_StopItem;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UTextBlock* NoItemsNameWidget;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UTextBlock* ItemNameWidget;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UImage* ItemNewIndicatorImage;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UTextBlock* ItemDescriptionWidget;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UImage* PreviewCenterItem;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UImage* PreviewLeftItem_01;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UImage* PreviewLeftItem_02;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UImage* PreviewLeftItem_03;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UImage* PreviewRightItem_01;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UImage* PreviewRightItem_02;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UImage* PreviewRightItem_03;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UImage* PreviewRightItem_04;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UImage* PreviewRightItem_05;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UImage* PreviewRightItem_06;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UWidgetAnimation* MoveItemLeftAnim;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UWidgetAnimation* MoveItemRightAnim;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UWidgetAnimation* StopItemLeftAnim;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UWidgetAnimation* StopItemRightAnim;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UWidgetAnimation* ShowItemsAnim;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UWidgetAnimation* HideItemsAnim;
    
protected:
    UPROPERTY(Transient)
    ASHCharacterPlay* OwnerCharacter;
    
    UPROPERTY(Instanced, Transient)
    TArray<UWidget*> DynamicItemWidgets;
    
    UPROPERTY(Transient)
    UWidgetAnimation* CurrentPlayingAnimation;
    
public:
    USHGameplayInventorySlider();

protected:
    UFUNCTION(BlueprintCallable)
    void RefreshItemsZOrder();
    
    UFUNCTION(BlueprintCallable)
    void RefreshItemNameAndDescription();
    
    UFUNCTION()
    void ProcessAnimationFinishedEvent();
    
};

