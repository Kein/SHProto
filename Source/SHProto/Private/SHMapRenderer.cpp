#include "SHMapRenderer.h"
#include "Components/SceneComponent.h"
#include "Components/WidgetComponent.h"

ASHMapRenderer::ASHMapRenderer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->Widget = CreateDefaultSubobject<UWidgetComponent>(TEXT("Widget"));
    this->ReceiverDynamicMaterial = NULL;
    this->Widget->SetupAttachment(RootComponent);
}

USHGameplayMapRenderWidget* ASHMapRenderer::GetUserWidgetObject() const {
    return NULL;
}

UTextureRenderTarget2D* ASHMapRenderer::GetRenderTarget() const {
    return NULL;
}


