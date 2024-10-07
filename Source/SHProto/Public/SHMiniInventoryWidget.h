#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ESHItemTypeEnum.h"
#include "SHMiniInventoryWidget.generated.h"

class ASHCharacterPlay;
class UAkAudioEvent;
class UCanvasPanel;
class UImage;
class USHGameplayFocusWidget;
class UTextBlock;
class UTexture;
class UWidget;
class UWidgetAnimation;

UCLASS(EditInlineNew)
class SHPROTO_API USHMiniInventoryWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bAllowLoopItems;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float InputThrottleAcceleration;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FText NoItemsAtAllDisplayText;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditDefaultsOnly)
    UTexture* DebugTexture;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UCanvasPanel* InvBackground;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UCanvasPanel* PreviewsContainerCanvas;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UTextBlock* ItemNameWidget;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UImage* PreviewCenterItem;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UImage* PreviewUpItem_01;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UImage* PreviewUpItem_02;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UImage* PreviewUpItem_03;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UImage* PreviewUpItem_04;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UImage* PreviewDownItem_01;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UImage* PreviewDownItem_02;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UImage* PreviewDownItem_03;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UImage* PreviewDownItem_04;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UWidgetAnimation* MoveItemUpAnim;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UWidgetAnimation* MoveItemDownAnim;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UWidgetAnimation* FadeInAnim;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UWidgetAnimation* FadeOutAnim;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UWidgetAnimation* WrongItemAnim;
    
    UPROPERTY(EditDefaultsOnly)
    UAkAudioEvent* AudioEvent_OpenMiniInventory;
    
    UPROPERTY(EditDefaultsOnly)
    UAkAudioEvent* AudioEvent_CloseMiniInventory;
    
    UPROPERTY(EditDefaultsOnly)
    UAkAudioEvent* AudioEvent_MoveItem;
    
    UPROPERTY(EditDefaultsOnly)
    UAkAudioEvent* AudioEvent_UseCorrectItem;
    
    UPROPERTY(EditDefaultsOnly)
    UAkAudioEvent* AudioEvent_UseIncorrectItem;
    
protected:
    UPROPERTY(Transient)
    ASHCharacterPlay* OwnerCharacter;
    
    UPROPERTY(Instanced, Transient)
    USHGameplayFocusWidget* OwnerWidget;
    
    UPROPERTY(Transient)
    UWidgetAnimation* CurrentPlayingAnimation;
    
    UPROPERTY(Instanced, Transient)
    TArray<UWidget*> DynamicItemWidgets;
    
    UPROPERTY(Transient)
    TArray<ESHItemTypeEnum> RequestedItemTypes;
    
public:
    USHMiniInventoryWidget();

protected:
    UFUNCTION(BlueprintCallable)
    void OnItemMoveZOrderUpdate();
    
    UFUNCTION(BlueprintCallable)
    void OnItemMoveNameAndDescriptionUpdate();
    
    UFUNCTION()
    void OnAnimFinished();
    
};

