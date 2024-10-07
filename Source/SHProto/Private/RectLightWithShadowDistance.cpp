#include "RectLightWithShadowDistance.h"
#include "RectLightWithShadowDistanceComponent.h"

ARectLightWithShadowDistance::ARectLightWithShadowDistance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<URectLightWithShadowDistanceComponent>(TEXT("LightComponent0"))) {
    const FProperty* p_LightComponent = GetClass()->FindPropertyByName("LightComponent");
    (*p_LightComponent->ContainerPtrToValuePtr<ULightComponent*>(this)) = (ULightComponent*)RootComponent;
    this->RectLightComponent = (URectLightComponent*)RootComponent;
}


