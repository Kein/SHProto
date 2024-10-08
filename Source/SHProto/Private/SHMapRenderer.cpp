#include "SHMapRenderer.h"
#include "Components/SceneComponent.h"
#include "Components/WidgetComponent.h"

ASHMapRenderer::ASHMapRenderer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    // FIXME
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->Widget = CreateDefaultSubobject<UWidgetComponent>(TEXT("Widget"));
    // this->Widget->SetupAttachment(RootComponent);
    this->ReceiverDynamicMaterial = NULL;
}

USHGameplayMapRenderWidget* ASHMapRenderer::GetUserWidgetObject() const {
    return NULL;
}

UTextureRenderTarget2D* ASHMapRenderer::GetRenderTarget() const {
    return NULL;
}


