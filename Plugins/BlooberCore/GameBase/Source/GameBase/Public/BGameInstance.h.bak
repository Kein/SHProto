#pragma once
#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "GlobalPropertiesDataProvider.h"
#include "StreamableLevelHandle.h"
#include "BGameInstance.generated.h"

class UBaseGameConfig;
class UGlobalPropertiesData;
class UInputModeManager;
class UMaterialParameterCollection;
class UMovieConfig;
class UPlayerProfile;
class URebindableInput;
class USaveWidget;
class UTexture2D;

UCLASS(NonTransient)
class GAMEBASE_API UBGameInstance : public UGameInstance, public IGlobalPropertiesDataProvider {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FStreamableLevelHandle MainMenuLevel;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UBaseGameConfig* MainGameConfig;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool IgnoreSaveLevelTransforms;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FStreamableLevelHandle IntermediateLevel;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UMaterialParameterCollection* GlobalCollection;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UMaterialParameterCollection* GlobalSettingsCollection;
    
    UPROPERTY(Instanced)
    USaveWidget* SaveWidget;
    
    UPROPERTY()
    URebindableInput* RebindableInput;
    
    UPROPERTY()
    UGlobalPropertiesData* GlobalProperties;
    
    UPROPERTY()
    UInputModeManager* InputModeManager;
    
    UPROPERTY()
    UTexture2D* LastScreenshotTexture;
    
public:
    UBGameInstance();

    UFUNCTION(BlueprintPure)
    bool WasPadConnected() const;
    
    UFUNCTION(BlueprintPure)
    bool WasMouseMoved() const;
    
    UFUNCTION(BlueprintCallable)
    void SetLastScreenshotTexture(UTexture2D* Texture, bool PrepareLoadingScreen);
    
    UFUNCTION(BlueprintCallable)
    bool ReloadGame(bool bSaveOnDisk, const FString& Title, bool GrabScreenShot, UMovieConfig* Movie, float UnskipableLen);
    
    UFUNCTION(BlueprintPure)
    bool IsWorldTravelFinished() const;
    
    UFUNCTION(BlueprintPure)
    bool IsPlayingFromMainMenu() const;
    
    UFUNCTION(BlueprintPure)
    bool IsPadActive() const;
    
    UFUNCTION(BlueprintPure)
    bool IsMouseActive() const;
    
    UFUNCTION(BlueprintPure)
    bool IsKeyboardActive() const;
    
    UFUNCTION(BlueprintPure)
    bool IsGameSuspended() const;
    
    UFUNCTION(BlueprintPure)
    bool IsGameDeactivated() const;
    
    UFUNCTION(BlueprintPure)
    URebindableInput* GetRebindableInput();
    
    UFUNCTION(BlueprintPure)
    UPlayerProfile* GetPlayerProfile();
    
    UFUNCTION(BlueprintPure)
    UTexture2D* GetLastScreenshotTexture() const;
    
    UFUNCTION(BlueprintCallable)
    void BackToMainMenu();
    

    // Fix for true pure virtual functions not being implemented
};

