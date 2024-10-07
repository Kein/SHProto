#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "StateWidgetInterface.h"
#include "StartGameWidget.generated.h"

class UWidgetAnimation;
class UWidgetSwitcher;

UCLASS(EditInlineNew)
class GAMEBASE_API UStartGameWidget : public UUserWidget, public IStateWidgetInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Instanced)
    UWidgetSwitcher* SlideShow_switcher;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UWidgetAnimation* FadeOut_anim;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MaxTimer;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MinInputTimer;
    
public:
    UStartGameWidget();

protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnStart();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnNext();
    
    UFUNCTION()
    void OnFadedOutAnim();
    
public:
    UFUNCTION(BlueprintCallable)
    void Continue();
    

    // Fix for true pure virtual functions not being implemented
};

