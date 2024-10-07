#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DebugCameraActor.generated.h"

class UDebugCameraComponent;
class USceneComponent;

UCLASS()
class SHPROTO_API ADebugCameraActor : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UDebugCameraComponent* CameraComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    USceneComponent* SceneComponent;
    
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString FriendlyScreenshotName;
    
    ADebugCameraActor(const FObjectInitializer& ObjectInitializer);

};

