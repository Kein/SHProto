#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "EventReceiverInterface.h"
#include "StateWidgetInterface.h"
#include "UserSelectionWidget.generated.h"

class UAkAudioEvent;

UCLASS(EditInlineNew)
class GAMEBASE_API UUserSelectionWidget : public UUserWidget, public IStateWidgetInterface, public IEventReceiverInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAkAudioEvent* ClickedSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAkAudioEvent* WrongClickedSound;
    
public:
    UUserSelectionWidget();

protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnShowProcessing();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnShowPressA();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnShowAskNoUser();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInputDeviceChanged();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnFadeOut();
    
    UFUNCTION(BlueprintCallable)
    void FadedOut();
    

    // Fix for true pure virtual functions not being implemented
};

