#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine/EngineBaseTypes.h"
#include "EGameBaseInputDevice.h"
#include "GameBaseStatics.generated.h"

class ABGameModeBase;
class APlayerController;
class UAkAudioEvent;
class UBGameInstance;
class UObject;
class UPersistentSaveData;
class UPlayerProfile;
class UPlaythroughPersistentData;
class UTexture2D;

UCLASS(BlueprintType)
class GAMEBASE_API UGameBaseStatics : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGameBaseStatics();

    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool WasMouseMoved(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void WaitForAllSaveAsyncOperations(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void StopSound(UAkAudioEvent* Sound);
    
    UFUNCTION(BlueprintCallable)
    static void ShowSystemHelp();
    
    UFUNCTION(BlueprintCallable)
    static void ShowMouseCursor(APlayerController* PlayerController);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool ShadersUseHighQualityBlock(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void SetMouseCursorVisibility(APlayerController* PlayerController, bool Show);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetInputModeUIOnly(UObject* WorldContextObject, APlayerController* PlayerController, bool NewShowMouseCursor, EMouseLockMode MouseLockMode);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetInputModeGameOnly(UObject* WorldContextObject, APlayerController* PlayerController, bool NewShowMouseCursor, bool ConsumeCaptureMouseDown);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetInputModeGameAndUI(UObject* WorldContextObject, APlayerController* PlayerController, bool NewShowMouseCursor, EMouseLockMode MouseLockMode, bool HideCursorDuringCapture);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetGamePaused(UObject* WorldContextObject, const bool IsPaused);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetDefaultGamma(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetActualGamma(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SaveUserProfile(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool SaveSlotDataExist(UObject* WorldContextObject, int32 SlotIndex);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SavePersistentGameDate(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SaveGame(UObject* WorldContextObject, const FString& Title, bool GrabScreenShot);
    
    UFUNCTION(BlueprintCallable)
    static void ResumeDynamicResolution();
    
    UFUNCTION(BlueprintCallable)
    static void PostWiseEvent(UAkAudioEvent* Event);
    
    UFUNCTION(BlueprintCallable)
    static void PlaySound(UAkAudioEvent* Sound);
    
    UFUNCTION(BlueprintCallable)
    static void PauseDynamicResolution();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void MakeQuickSave(UObject* WorldContextObject, const FString& Title, bool GrabScreenShot);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void MakePersistentGameDateDirty(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void MakeFullSave(UObject* WorldContextObject, int32 SlotIndex, const FString& Title, bool GrabScreenShot, bool AllowAsyncOperation);
    
    UFUNCTION(BlueprintPure)
    static bool IsSystemHelpSupported();
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsSwitchUserSupported(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsPadConnected(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsPadActive(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static bool IsNEOOrScorpio();
    
    UFUNCTION(BlueprintPure)
    static bool IsMoviePlayerActive();
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsMouseActive(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsKeyboardActive(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsGameSuspended(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsGamePaused(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsGameDeactivated(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool IsGameCompletelyInstalled(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static bool IsConsoleMenu();
    
    UFUNCTION(BlueprintCallable)
    static void HideMouseCursor(APlayerController* PlayerController);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FTimespan GetTimeSinceLastSave(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UTexture2D* GetSavedScreenShot(UObject* WorldContextObject, int32 SlotIndex);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetRevisionVersionNumber();
    
    UFUNCTION(BlueprintCallable)
    static FString GetProjectVersionString();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UPlaythroughPersistentData* GetPlaythroughPersistentGameData(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UPlayerProfile* GetPlayerProfile(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FString GetPlayerName(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UPersistentSaveData* GetPersistentGameData(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FDateTime GetLastSaveTime(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static EGameBaseInputDevice GetInputDevice(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static FString GetBuildStreamName();
    
    UFUNCTION(BlueprintCallable)
    static FString GetBuildPackageName();
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static ABGameModeBase* GetBaseGameMode(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UBGameInstance* GetBaseGameInstance(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UTexture2D* GetActualSavedScreenShot(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void FlushSave(UObject* WorldContextObject, int32 SlotIndex, const FString& Title, bool ApplyCurrentTime, bool PreserveSlotIndex);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void FlushPartialSave(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void AutoSave(UObject* WorldContextObject, const FString& Title, bool GrabScreenShot, bool Flush);
    
};

