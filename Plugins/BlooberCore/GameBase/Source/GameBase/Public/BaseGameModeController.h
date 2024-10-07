#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "BaseGameModeController.generated.h"

class UAkAudioEvent;
class ULostPadWidget;
class UUserWidget;

UCLASS(Abstract, BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GAMEBASE_API UBaseGameModeController : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, NoClear)
    TSoftClassPtr<ULostPadWidget> LostPadWidgetClass;
    
    UPROPERTY(EditAnywhere)
    bool bAutoHideLostPadWidget;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftClassPtr<UUserWidget> PreLoadingWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAkAudioEvent* AlarmPopupOpenEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAkAudioEvent* AlarmPopupCloseEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAkAudioEvent* PauseGameStartEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAkAudioEvent* PauseGameCloseEvent;
    
public:
    UBaseGameModeController(const FObjectInitializer& ObjectInitializer);

};

