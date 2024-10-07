#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "GameSettings.generated.h"

class UDataAsset;
class ULoadScreenWidget;
class ULoadingVideoOverlayWidget;
class UMovieConfig;

UCLASS(DefaultConfig, Config=Game)
class GAMEBASE_API UGameSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Config, EditAnywhere)
    FString DefaultLanguage;
    
    UPROPERTY(Config, EditAnywhere)
    TArray<FString> SupportedLanguages;
    
    UPROPERTY(Config, EditAnywhere)
    FString DefaulAudiotLanguage;
    
    UPROPERTY(Config, EditAnywhere)
    TArray<FString> SupportedAudioLanguages;
    
    UPROPERTY(Config, EditAnywhere)
    FString WorldTravelMovie;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftObjectPtr<UMovieConfig> WorldTravelMovieConfig;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftClassPtr<ULoadScreenWidget> LoadScreenWidgetClass;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftClassPtr<ULoadingVideoOverlayWidget> LoadScreenOverlayClass;
    
    UPROPERTY(Config, EditAnywhere)
    bool bUseWSADAsUINavigation;
    
    UPROPERTY(Config, EditAnywhere)
    bool bShowLostPadDialogOnDesktop;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftObjectPtr<UDataAsset> DLCConfig;
    
public:
    UGameSettings();

};

