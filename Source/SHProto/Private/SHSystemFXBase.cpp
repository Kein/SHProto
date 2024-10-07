#include "SHSystemFXBase.h"
#include "Components/DecalComponent.h"
#include "Components/SceneComponent.h"

ASHSystemFXBase::ASHSystemFXBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->ParticlesPivotPoint = CreateDefaultSubobject<USceneComponent>(TEXT("ParticlesPivotPoint"));
    this->DecalPivotPoint = CreateDefaultSubobject<USceneComponent>(TEXT("DecalPivotPoint"));
    this->DecalComponent = CreateDefaultSubobject<UDecalComponent>(TEXT("DecalComponent"));
    this->AssignedSystemFXData = NULL;
    this->AkAudioEventOverride = NULL;
    this->DecalComponent->SetupAttachment(DecalPivotPoint);
    this->DecalPivotPoint->SetupAttachment(RootComponent);
    this->ParticlesPivotPoint->SetupAttachment(RootComponent);
}

void ASHSystemFXBase::SetSelfDestroyTimeValue(float InValue) {
}

void ASHSystemFXBase::ProcessImpactFXFinished(UNiagaraComponent* InComponent) {
}

void ASHSystemFXBase::PostAkEvent(UAkAudioEvent* InAudioAsset, bool InShouldStopPooledAkComponentOnEndPlay) {
}



UNiagaraComponent* ASHSystemFXBase::GetSpawnedNiagaraComponent() const {
    return NULL;
}

UMaterialInstanceDynamic* ASHSystemFXBase::GetDecalMaterialDynamic() const {
    return NULL;
}


