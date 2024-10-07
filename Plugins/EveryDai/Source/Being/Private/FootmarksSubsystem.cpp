#include "FootmarksSubsystem.h"

UFootmarksSubsystem::UFootmarksSubsystem() {
    this->CanvasClearMaterial = NULL;
    this->CanvasTexture = NULL;
    this->FootmarksCanvasDensity = 128.00f;
    this->FootmarksCanvas[0] = NULL;
    this->FootmarksCanvas[1] = NULL;
}

void UFootmarksSubsystem::SetCenterPosition(FVector OwnerPosition) {
}

void UFootmarksSubsystem::InitializeFootmarkTracker(UMaterialInterface* ClearMaterial, UCanvasRenderTarget2D* Canvas, float Density) {
}

void UFootmarksSubsystem::EnableFootmarkTracing(bool State) {
}


