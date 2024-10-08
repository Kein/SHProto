#include "SHRadio.h"
#include "SHAkComponent.h"

ASHRadio::ASHRadio(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    // FIXME
    // this->SHAkComponent = CreateDefaultSubobject<USHAkComponent>(TEXT("SHAkComponent"));
    // this->SHAkComponent->SetupAttachment(RootComponent);
    this->OuterSphereRadius = 2000.00f;
    this->InnerSphereRadius = 1000.00f;
    this->StandardDistanceScoreInfluence = 0.50f;
    this->NavmeshDistanceScoreInfluence = 0.50f;
    this->NavMeshNavigationFilterClass = NULL;
    this->StartEvent = NULL;
    this->StopEvent = NULL;
    this->RTPC_DangerLevel = NULL;
    this->RTPC_OuterSphereValue = 0.00f;
    this->RTPC_InnerSphereValue = 90.00f;
    this->EnableLightsSupport = true;
    this->LightsSensitivityMin = 0.50f;
    this->LightsSensitivityFull = 30.00f;
}

void ASHRadio::SHDebug_Character_Items_Radio_ValuesDebug() {
}

void ASHRadio::SHDebug_Character_Items_Radio_DrawDebug() {
}

void ASHRadio::SetEnemyIgnored(APawn* InEnemyPawn, const bool bInShouldBeIgnored) {
}


