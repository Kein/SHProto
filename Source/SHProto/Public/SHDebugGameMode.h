#pragma once
#include "CoreMinimal.h"
#include "BGameModeBase.h"
#include "SHDebugGameMode.generated.h"

class ADebugCameraActor;
class ALocalFogVolumeActor;
class ASceneCapture2D;
class UGameModeMenuController;
class UTextureRenderTarget2D;

UCLASS(NonTransient)
class ASHDebugGameMode : public ABGameModeBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    ASceneCapture2D* CaptureActor;
    
    UPROPERTY(Transient)
    UTextureRenderTarget2D* Target;
    
    UPROPERTY(Transient)
    TArray<ALocalFogVolumeActor*> FogActors;
    
    UPROPERTY(Transient)
    TArray<ADebugCameraActor*> CameraActors;
    
protected:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UGameModeMenuController* GameMenuController;
    
public:
    ASHDebugGameMode(const FObjectInitializer& ObjectInitializer);

};

