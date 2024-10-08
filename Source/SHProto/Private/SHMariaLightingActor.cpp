#include "SHMariaLightingActor.h"
#include "Components/SceneComponent.h"
#include "Components/SpotLightComponent.h"

ASHMariaLightingActor::ASHMariaLightingActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
	// FIXME
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->SpotLightComponent = CreateDefaultSubobject<USpotLightComponent>(TEXT("SpotLight"));
    // this->SpotLightComponent->SetupAttachment(RootComponent);
    this->DefaultIntensity = 20.00f;
    this->SourceOffset = 30.00f;
}


