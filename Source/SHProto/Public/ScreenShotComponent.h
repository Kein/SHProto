#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "ScreenShotComponent.generated.h"

class UMaterialInterface;
class USceneCaptureComponent2D;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UScreenShotComponent : public USceneComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Instanced)
    USceneCaptureComponent2D* SShotCapture;
    
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<UMaterialInterface*> SShotPostBlendables;
    
    UScreenShotComponent(const FObjectInitializer& ObjectInitializer);

};

