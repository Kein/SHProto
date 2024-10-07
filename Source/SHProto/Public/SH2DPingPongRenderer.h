#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "2DPingPongPass.h"
#include "SH2DPingPongRenderer.generated.h"

class UCanvasRenderTarget2D;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USH2DPingPongRenderer : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool EnabledOnQualityLow;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool EnabledOnQualityMedium;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool EnabledOnQualityHigh;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool EnabledOnQualityEpic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool ProcessPasses;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<UCanvasRenderTarget2D*> RenderTargets;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<F2DPingPongPass> Passes;
    
    USH2DPingPongRenderer(const FObjectInitializer& ObjectInitializer);

};

