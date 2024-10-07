#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "SpawnPointHandle.h"
#include "EInGameQuitTarget.h"
#include "SHBaseMainMenuWidget.h"
#include "SHInGameMenuWidget.generated.h"

class UBButton;
class USHAskQuitDialogWidget;
class UWidgetAnimation;

UCLASS(Abstract, EditInlineNew)
class USHInGameMenuWidget : public USHBaseMainMenuWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FKey> ResumeKeys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSpawnPointHandle NewGameSpawnPoint;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UBButton* Load_but;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UBButton* ToMainMenu_but;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UBButton* Quit_but;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    USHAskQuitDialogWidget* AskQuit_dialog;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UWidgetAnimation* FadeIn_anim;
    
public:
    USHInGameMenuWidget();

    UFUNCTION(BlueprintImplementableEvent)
    bool OnResume();
    
    // FIXME
    // UFUNCTION(BlueprintImplementableEvent)
    // void OnAskQuit(const TEnumAsByte<EInGameQuitTarget> _QuitTarget);
    
    UFUNCTION(BlueprintCallable)
    void FadeOut();
    
protected:
    UFUNCTION()
    void FadedOut();
    
public:
    UFUNCTION(BlueprintCallable)
    void AskQuit(TEnumAsByte<EInGameQuitTarget> _QuitTarget);
    
};

