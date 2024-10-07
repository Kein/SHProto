#pragma once
#include "CoreMinimal.h"
#include "EffectHandle.h"
#include "BUserWidget.h"
#include "EGameOverCause.h"
#include "SHGameplayGameOverWidget.generated.h"

class ASHCharacterPlay;
class UWidgetAnimation;

UCLASS(EditInlineNew)
class USHGameplayGameOverWidget : public UBUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Transient)
    UWidgetAnimation* FadeIn;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UWidgetAnimation* FadeOut;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool AutoReloadOnDeath;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float ShowDelayValue;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FEffectHandle LightEffect;
    
    UPROPERTY(Transient)
    ASHCharacterPlay* OwnerCharacter;
    
public:
    USHGameplayGameOverWidget();

protected:
    UFUNCTION()
    void ShowInternal();
    
    UFUNCTION(BlueprintCallable)
    void RequestReload();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnShown(EGameOverCause _GameOverCause);
    
};

