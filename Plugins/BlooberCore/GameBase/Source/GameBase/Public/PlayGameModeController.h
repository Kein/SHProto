#pragma once
#include "CoreMinimal.h"
#include "BaseGameModeController.h"
#include "PlayGameModeController.generated.h"

class UAkAudioEvent;
class UAskDialogWidget;
class ULoadScreenWidget;
class UMainMenuWidget;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GAMEBASE_API UPlayGameModeController : public UBaseGameModeController {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, NoClear)
    TSoftClassPtr<ULoadScreenWidget> LoadWidgetClass;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, NoClear)
    TSoftClassPtr<UMainMenuWidget> MenuWidgetClass;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, NoClear)
    TSoftClassPtr<UAskDialogWidget> AskReloadWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAkAudioEvent* InGameMenuOpenEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAkAudioEvent* InGameMenuCloseEvent;
    
public:
    UPlayGameModeController(const FObjectInitializer& ObjectInitializer);

};

