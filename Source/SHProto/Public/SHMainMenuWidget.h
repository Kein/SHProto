#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "StreamableLevelHandle.h"
#include "SpawnPointData.h"
#include "SpawnPointHandle.h"
#include "SHBaseMainMenuWidget.h"
#include "SHMainMenuWidget.generated.h"

class UBButton;
class UBinkMediaPlayer;
class UImage;
class UMovieConfig;
class USHNGInfoDialog;
class USpawnPointsListWidget;
class USpawnPointsPanelWidget;

UCLASS(Abstract, EditInlineNew)
class USHMainMenuWidget : public USHBaseMainMenuWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool IsDemo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSpawnPointHandle NewGameSpawnPoint;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FKey> FocusSpawnPointListKeys;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UBButton* Continue_but;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UBButton* NewGame_but;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UBButton* Load_but;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UBButton* Settings_but;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UBButton* Quit_but;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    USpawnPointsPanelWidget* SpawnPointsPanel_wdg;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    USpawnPointsListWidget* SpawnPoints_wdg;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UImage* BackgroundMovie_img;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    USHNGInfoDialog* NGInfoDialog;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<UBinkMediaPlayer> MediaPlayer;
    
public:
    USHMainMenuWidget();

    UFUNCTION(BlueprintImplementableEvent)
    void OnFocusSpawnPointList();
    
    UFUNCTION(BlueprintCallable)
    bool BeginNewGameFromSpawnPoint(UMovieConfig* Movie, float NonSkippableLen);
    
    UFUNCTION(BlueprintCallable)
    bool BeginGameFromSpawnPointHandle(const FSpawnPointHandle& SpawnPointHandle, UMovieConfig* Movie, float NonSkippableLen, bool IsNewGame);
    
    UFUNCTION(BlueprintCallable)
    void BeginGameFromSpawnPoint(const FSpawnPointData& SpawnPointData, UMovieConfig* Movie, float NonSkippableLen, bool IsNewGame);
    
    UFUNCTION(BlueprintCallable)
    void BeginCustomLevel(const FStreamableLevelHandle& LevelHandle);
    
};

