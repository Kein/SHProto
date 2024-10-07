#include "PointLightWithShadowDistance.h"
#include "PointLightWithShadowDistanceComponent.h"

APointLightWithShadowDistance::APointLightWithShadowDistance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UPointLightWithShadowDistanceComponent>(TEXT("LightComponent0"))) {
    const FProperty* p_LightComponent = GetClass()->FindPropertyByName("LightComponent");
    (*p_LightComponent->ContainerPtrToValuePtr<ULightComponent*>(this)) = (ULightComponent*)RootComponent;
    this->PointLightComponent = (UPointLightComponent*)RootComponent;
}


