#include "SHInventoryRenderer.h"
#include "Components/SceneComponent.h"
#include "Components/WidgetComponent.h"

ASHInventoryRenderer::ASHInventoryRenderer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
	// FIXME
    //this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    //this->Widget = CreateDefaultSubobject<UWidgetComponent>(TEXT("Widget"));
    //this->Widget->SetupAttachment(RootComponent);
}

USHGameplaySectionBaseWidget* ASHInventoryRenderer::GetUserWidgetObject() const {
    return NULL;
}

UTextureRenderTarget2D* ASHInventoryRenderer::GetRenderTarget() const {
    return NULL;
}


