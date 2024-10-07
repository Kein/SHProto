#pragma once
#include "CoreMinimal.h"
#include "EffectHandle.h"
#include "Blueprint/UserWidget.h"
#include "SHGameplayItemNotificationWidget.generated.h"

class UAkAudioEvent;
class UTextBlock;
class UWidgetAnimation;

UCLASS(EditInlineNew)
class SHPROTO_API USHGameplayItemNotificationWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Instanced)
    UTextBlock* NotificationText;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UWidgetAnimation* ShowAnim;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UWidgetAnimation* HideAnim;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float NotificationTime;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FText ConsumedText;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FText CollectedText;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UAkAudioEvent* NotificationAudioEvent;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TMap<FName, FText> CustomTexts;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName GameNotFullyInstalledRowName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FEffectHandle LightEffect;
    
public:
    USHGameplayItemNotificationWidget();

    UFUNCTION(BlueprintCallable)
    void PlayGameNotFullyInstalledNotificationRequest();
    
    UFUNCTION(BlueprintPure)
    bool CanShowNotification() const;
    
};

