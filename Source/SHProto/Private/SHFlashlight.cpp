#include "SHFlashlight.h"
#include "Curves/CurveFloat.h"
#include "Components/PointLightComponent.h"
#include "Components/RectLightComponent.h"
#include "Components/SpotLightComponent.h"
#include "Components/StaticMeshComponent.h"
#include "MaiLightEmitter.h"
#include "SHAkFlashlightComponent.h"

ASHFlashlight::ASHFlashlight(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Lightshaft = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Lightshaft"));
    this->LightMain = CreateDefaultSubobject<USpotLightComponent>(TEXT("Light"));
    this->BackLight = CreateDefaultSubobject<URectLightComponent>(TEXT("BackLight"));
    this->CloseLight = CreateDefaultSubobject<UPointLightComponent>(TEXT("CloseLight"));
    this->VeryCloseSpotlight = CreateDefaultSubobject<USpotLightComponent>(TEXT("VeryCloseSpotlight"));
    this->MaiLightEmitter = CreateDefaultSubobject<UMaiLightEmitter>(TEXT("MaiLightEmitter"));
    this->SHAkFlashlightComponent = CreateDefaultSubobject<USHAkFlashlightComponent>(TEXT("SHAkFlashlightComponent"));
    this->DefaultGlobalIntensity = 12.00f;
    this->MainLightIntensityMultiplier = 1.00f;
    this->BackLightIntensityMultiplier = 0.00f;
    this->CloseLightIntensityMultiplier = 0.00f;
    this->VeryCloseSpotlightIntensityMultiplier = 0.00f;
    this->CharacterControlRotationInterpSpeed = 10.00f;
    this->DirectionInterpSpeed = 7.50f;
    this->AnimationMultiplayer = 0.10f;
    this->CameraDistanceInterpSpeed = 10.00f;
    this->MinCameraDistance = 225.00f;
    this->bLightIntensityWithCurve = true;
    this->TurnOnTime = 1.00f;
    this->TurnOffTime = 1.00f;
    this->LightAtMonsterMainLightIntensityAddativeMod = 5.00f;
    this->LightAtMonsterCalmTime = 5.00f;
    this->LightAtMonsterFlickerCurve = NULL;
    this->LightAtMonsterFlickerCooldownTime = 2.50f;
    this->TraceMax = 2000.00f;
    this->SocketName = TEXT("FlashlightSocket");
    this->SpotUmbra = 20.00f;
    this->SpotPenumbra = 40.00f;
    this->ParametersCollection = NULL;
    this->TransformProcessor = NULL;
    this->LightIntensityCurve = CreateDefaultSubobject<UCurveFloat>(TEXT("Curve"));
    this->BackLight->SetupAttachment(RootComponent);
    this->CloseLight->SetupAttachment(RootComponent);
    this->LightMain->SetupAttachment(RootComponent);
    this->Lightshaft->SetupAttachment(RootComponent);
    this->MaiLightEmitter->SetupAttachment(LightMain);
    this->SHAkFlashlightComponent->SetupAttachment(RootComponent);
    this->VeryCloseSpotlight->SetupAttachment(RootComponent);
}

void ASHFlashlight::UpdateLightAtMonster(AActor* Monster, float InLightingAlpha) {
}

void ASHFlashlight::UpdateDustNiagara(UNiagaraComponent* InDustNiagara) {
}

void ASHFlashlight::UpdateDustMaterial(UMaterialInstanceDynamic* InDustMaterial) {
}

void ASHFlashlight::SetMainLightOffsetSource(USceneComponent* NewMainLightOffsetSource) {
}

void ASHFlashlight::SetLightIntensityProgress(float ProgressValue) {
}

void ASHFlashlight::SetLightIntensityModProgress(float ModValue) {
}

void ASHFlashlight::ProcessLightOn() {
}

void ASHFlashlight::ProcessLightOff() {
}

bool ASHFlashlight::PlayLightIntensityModAnimation(UCurveFloat* IntensityModCurve) {
    return false;
}



float ASHFlashlight::GetIntensityAlpha() const {
    return 0.0f;
}

void ASHFlashlight::EndLightAtMonster(AActor* Monster) {
}

void ASHFlashlight::EnableLookAtComponent(USceneComponent* NewLookAtRef, const FSHFlashlightLookAtSettings& InLookAtSettings) {
}

void ASHFlashlight::DisableLookAt(bool InstantViewRotation, float AwaitTime) {
}

void ASHFlashlight::ClearMainLightOffsetSource() {
}

void ASHFlashlight::BeginsLightAtMonster(AActor* Monster) {
}


