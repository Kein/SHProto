#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "InputCoreTypes.h"
#include "Sound/SlateSound.h"
#include "BUserWidget.h"
#include "SaveSlotInfo.h"
#include "StateWidgetInterface.h"
#include "MainMenuWidget.generated.h"

class UMovieConfig;
class UWidgetAnimation;

UCLASS(Abstract, EditInlineNew)
class GAMEBASE_API UMainMenuWidget : public UBUserWidget, public IStateWidgetInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateSound PressedSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FKey> SwitchUserKeys;
    
protected:
    UPROPERTY(BlueprintReadOnly, Transient)
    UWidgetAnimation* LoadingFadeOut_anim;
    
    UPROPERTY(EditAnywhere)
    FLinearColor CameraFadeOutColor;
    
public:
    UMainMenuWidget();

    UFUNCTION(BlueprintCallable)
    void ToMainMenu();
    
    UFUNCTION(BlueprintCallable)
    static void ShowSystemHelp();
    
    UFUNCTION(BlueprintCallable)
    void SelectSlot();
    
    UFUNCTION(BlueprintCallable)
    void ReturnToGame();
    
    UFUNCTION(BlueprintCallable)
    void QuitGame();
    
    UFUNCTION(BlueprintCallable)
    void PopulateSlots(bool WithScreenshots, bool SortByDate, bool SaveMode);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnShow();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    bool OnLoadingFadeOut();
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void OnHide();
    
    UFUNCTION(BlueprintCallable)
    void LoadSavedGame(int32 SlotIndex, UMovieConfig* Movie, float NonSkippableLen);
    
protected:
    UFUNCTION(BlueprintCallable)
    void LoadingFadedOut();
    
public:
    UFUNCTION(BlueprintPure)
    static bool IsSystemHelpSupported();
    
    UFUNCTION(BlueprintPure)
    bool IsSlotListNotEmpty() const;
    
    UFUNCTION(BlueprintPure)
    bool IsShowUserInfo() const;
    
    UFUNCTION(BlueprintPure)
    bool HasUserSlots() const;
    
    UFUNCTION(BlueprintPure)
    bool HasSlots() const;
    
    UFUNCTION(BlueprintPure)
    FSaveSlotInfo GetTheNewestSlotInfo(bool WithScreenShot) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetSlotsCount() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetSlotIndex(int32 Index) const;
    
protected:
    UFUNCTION()
    void FadeOutForLoading();
    
public:
    UFUNCTION(BlueprintCallable)
    void ContinueGame(UMovieConfig* Movie, float NonSkippableLen);
    
    UFUNCTION(BlueprintCallable)
    void BeginNewGame(UMovieConfig* Movie, float NonSkippableLen);
    

    // Fix for true pure virtual functions not being implemented
};

