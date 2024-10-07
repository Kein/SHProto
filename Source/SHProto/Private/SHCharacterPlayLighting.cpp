#include "SHCharacterPlayLighting.h"
#include "Components/PointLightComponent.h"
#include "Components/SpotLightComponent.h"

ASHCharacterPlayLighting::ASHCharacterPlayLighting(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->LightCharacterBack = CreateDefaultSubobject<USpotLightComponent>(TEXT("LightCharacterBack"));
    this->LightCharacterFace = CreateDefaultSubobject<USpotLightComponent>(TEXT("LightCharacterFace"));
    this->LightCharacterSide = CreateDefaultSubobject<USpotLightComponent>(TEXT("LightCharacterSide"));
    this->FlashlightOffSupportLight = CreateDefaultSubobject<UPointLightComponent>(TEXT("FlashlightOffSupportLight"));
    this->LightCharacterBackMinIntensity = 200.00f;
    this->LightCharacterBackFlashlightMod = 0.90f;
    this->bLightCharacterBackCastShadowsWhenMin = false;
    this->bLightCharacterBackCastShadowsWhenFlashlightMod = false;
    this->LightCharacterFaceMinIntensity = 200.00f;
    this->LightCharacterFaceFlashlightMod = 0.90f;
    this->bLightCharacterFaceCastShadowsWhenMin = false;
    this->bLightCharacterFaceCastShadowsWhenFlashlightMod = false;
    this->LightCharacterSideMinIntensity = 200.00f;
    this->LightCharacterSideFlashlightMod = 0.90f;
    this->bLightCharacterSideCastShadowsWhenMin = false;
    this->bLightCharacterSideCastShadowsWhenFlashlightMod = false;
    this->FlashlightOffSupportLightDefaultIntensity = 0.01f;
    this->FlashlightOffSupportLightIntensityCurve = NULL;
    this->FlashlightOffSupportLight->SetupAttachment(RootComponent);
    this->LightCharacterBack->SetupAttachment(RootComponent);
    this->LightCharacterFace->SetupAttachment(RootComponent);
    this->LightCharacterSide->SetupAttachment(RootComponent);
}

void ASHCharacterPlayLighting::SetFlashlightOffSupportLightProgress(float ProgressValue) {
}


