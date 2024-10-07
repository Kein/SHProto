#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Subsystems/WorldSubsystem.h"
#include "FootmarksSubsystem.generated.h"

class UCanvas;
class UCanvasRenderTarget2D;
class UMaterialInterface;

UCLASS(BlueprintType, Transient)
class BEING_API UFootmarksSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UMaterialInterface* CanvasClearMaterial;
    
    UPROPERTY(Transient)
    UCanvasRenderTarget2D* CanvasTexture;
    
    UPROPERTY(Transient)
    float FootmarksCanvasDensity;
    
    UPROPERTY(Transient)
    UCanvas* FootmarksCanvas[2];
    
public:
    UFootmarksSubsystem();

    UFUNCTION(BlueprintCallable)
    void SetCenterPosition(FVector OwnerPosition);
    
    UFUNCTION(BlueprintCallable)
    void InitializeFootmarkTracker(UMaterialInterface* ClearMaterial, UCanvasRenderTarget2D* Canvas, float Density);
    
    UFUNCTION(BlueprintCallable)
    void EnableFootmarkTracing(bool State);
    
};

