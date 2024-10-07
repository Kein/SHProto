#include "SpotLightWithShadowDistance.h"
#include "SpotLightWithShadowDistanceComponent.h"

ASpotLightWithShadowDistance::ASpotLightWithShadowDistance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<USpotLightWithShadowDistanceComponent>(TEXT("LightComponent0"))) {
    const FProperty* p_LightComponent = GetClass()->FindPropertyByName("LightComponent");
    (*p_LightComponent->ContainerPtrToValuePtr<ULightComponent*>(this)) = (ULightComponent*)RootComponent;
    this->SpotLightComponent = (USpotLightComponent*)RootComponent;
}


