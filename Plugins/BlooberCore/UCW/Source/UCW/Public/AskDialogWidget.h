#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "BUserWidget.h"
#include "EAskDialogType.h"
#include "SimpleDynamicDelegateDelegate.h"
#include "AskDialogWidget.generated.h"

class UAkAudioEvent;
class UBButton;
class UWidgetAnimation;

UCLASS(Abstract, EditInlineNew)
class UCW_API UAskDialogWidget : public UBUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    EAskDialogType Type;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FKey> AcceptKeys;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FKey> DeclineKeys;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FKey> CancelKeys;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UBButton* Accept_but;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UBButton* Decline_but;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UBButton* Cancel_but;
    
    UPROPERTY(EditDefaultsOnly)
    UAkAudioEvent* AcceptSoundEvent;
    
    UPROPERTY(EditDefaultsOnly)
    UAkAudioEvent* DeclineSoundEvent;
    
    UPROPERTY(EditDefaultsOnly)
    UAkAudioEvent* CancelSoundEvent;
    
    UPROPERTY(EditDefaultsOnly)
    UAkAudioEvent* WrongKeySoundEvent;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UWidgetAnimation* FadeOut_anim;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FSimpleDynamicDelegate OnAccept;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FSimpleDynamicDelegate OnDecline;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FSimpleDynamicDelegate OnCancel;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FSimpleDynamicDelegate OnFadedOut;
    
    UAskDialogWidget();

    UFUNCTION(BlueprintCallable)
    void Show();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnShow();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    bool OnFadeOut();
    
    UFUNCTION(BlueprintCallable)
    void FadedOut();
    
public:
    UFUNCTION(BlueprintCallable)
    void Decline();
    
    UFUNCTION(BlueprintCallable)
    void Cancel();
    
    UFUNCTION(BlueprintCallable)
    void Accept();
    
};

