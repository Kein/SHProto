#pragma once
#include "CoreMinimal.h"
#include "BaseGameModeController.h"
#include "MainMenuGameModeController.generated.h"

class UAkAudioEvent;
class UMainMenuWidget;
class UStartGameSettingsWidget;
class UStartGameWidget;
class UUserSelectionWidget;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GAMEBASE_API UMainMenuGameModeController : public UBaseGameModeController {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, NoClear)
    TSoftClassPtr<UMainMenuWidget> MenuWidgetClass;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftClassPtr<UStartGameWidget> StartGameWidgetClass;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftClassPtr<UUserSelectionWidget> UserSelectionWidgetClass;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, NoClear)
    TSoftClassPtr<UStartGameSettingsWidget> StartGameSettingsWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAkAudioEvent* MainMenuOpenEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAkAudioEvent* MainMenuCloseEvent;
    
public:
    UMainMenuGameModeController(const FObjectInitializer& ObjectInitializer);

};

