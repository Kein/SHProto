#pragma once
#include "CoreMinimal.h"
#include "Styling/SlateColor.h"
#include "Blueprint/UserWidget.h"
#include "SHGameplayHealingItemsNotificationRowWidget.generated.h"

class ASHCharacterPlay;
class UAkAudioEvent;
class UTextBlock;
class UWidgetAnimation;

UCLASS(EditInlineNew)
class SHPROTO_API USHGameplayHealingItemsNotificationRowWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Instanced)
    UTextBlock* ItemDisplayNameText;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UTextBlock* ItemCountText;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UWidgetAnimation* PrimaryAnim;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UWidgetAnimation* SecondaryAnim;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UWidgetAnimation* NoItemAnim;
    
    UPROPERTY(EditDefaultsOnly)
    FSlateColor AvailableItemsColor;
    
    UPROPERTY(EditDefaultsOnly)
    FSlateColor NoItemsColor;
    
    UPROPERTY(EditDefaultsOnly)
    UAkAudioEvent* AudioEvent_ItemCollected;
    
    UPROPERTY(EditDefaultsOnly)
    UAkAudioEvent* AudioEvent_ItemUsed;
    
    UPROPERTY(EditDefaultsOnly)
    UAkAudioEvent* AudioEvent_NoItem;
    
    UPROPERTY(Transient)
    ASHCharacterPlay* OwnerCharacterPlay;
    
    UPROPERTY(Transient)
    UWidgetAnimation* CurrentItemAnimation;
    
public:
    USHGameplayHealingItemsNotificationRowWidget();

protected:
    UFUNCTION(BlueprintCallable)
    void UpdateItemsCountText();
    
    UFUNCTION()
    void ProcessHealthItemAnimationFinishedEvent();
    
};

