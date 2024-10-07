#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "Sound/SlateSound.h"
#include "Blueprint/UserWidget.h"
#include "StateWidgetInterface.h"
#include "LoadScreenWidget.generated.h"

UCLASS(EditInlineNew)
class GAMEBASE_API ULoadScreenWidget : public UUserWidget, public IStateWidgetInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool WaitForInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateSound PressedSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FKey> ActivationKeys;
    
public:
    ULoadScreenWidget();

    UFUNCTION(BlueprintCallable)
    void ReadyForPlay();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnShowReadyForPlay();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnShow(bool IsFromNewGame, int32 ZOrder);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnPrepareToShow();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnFadeOut();
    
    UFUNCTION(BlueprintCallable)
    void OnFadedOut();
    

    // Fix for true pure virtual functions not being implemented
};

