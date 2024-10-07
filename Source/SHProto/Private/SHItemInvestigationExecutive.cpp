#include "SHItemInvestigationExecutive.h"
#include "Components/SceneComponent.h"
#include "Components/SpotLightComponent.h"
#include "SHCineCameraComponent.h"
#include "SHItemExeCameraManagerComponent.h"
#include "SHItemExeFlashlightManagerComponent.h"

ASHItemInvestigationExecutive::ASHItemInvestigationExecutive(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->InvestigationCamera = CreateDefaultSubobject<USHCineCameraComponent>(TEXT("InvestigationCamera"));
    this->InvestigationSpotLight = CreateDefaultSubobject<USpotLightComponent>(TEXT("InvestigationSpotLight"));
    this->FlashlightTarget = CreateDefaultSubobject<USceneComponent>(TEXT("FlashlightTarget"));
    this->CameraManager = CreateDefaultSubobject<USHItemExeCameraManagerComponent>(TEXT("CameraManager"));
    this->FlashlightManager = CreateDefaultSubobject<USHItemExeFlashlightManagerComponent>(TEXT("FlashlightManager"));
    this->bHideDLCSkinDuringMainInvestigation = false;
    this->LookAtAlphaBlendInSpeed = 5.00f;
    this->LookAtAlphaBlendOutSpeed = 5.00f;
    this->MapRendererClass = NULL;
    this->MapRenderer = NULL;
    this->FlashlightTarget->SetupAttachment(RootComponent);
    this->InvestigationCamera->SetupAttachment(RootComponent);
    this->InvestigationSpotLight->SetupAttachment(RootComponent);
}

void ASHItemInvestigationExecutive::SetTranscirptBlocked(const bool Blocked, const UObject* Object) {
}

void ASHItemInvestigationExecutive::SetSwitchItemBlocked(const bool Blocked, const UObject* Object) {
}

void ASHItemInvestigationExecutive::SetRotateItemBlocked(const bool Blocked, const UObject* Object) {
}

void ASHItemInvestigationExecutive::SetExitBlocked(const bool Blocked, const UObject* Object) {
}

void ASHItemInvestigationExecutive::SetCustomTranscriptData(TSoftObjectPtr<USHTranscriptData> InCustomTranscriptData) {
}

void ASHItemInvestigationExecutive::SetAllActionsBlocked(const bool Blocked, const UObject* Object) {
}



bool ASHItemInvestigationExecutive::IsTranscirptBlocked() const {
    return false;
}

bool ASHItemInvestigationExecutive::IsSwitchItemBlocked() const {
    return false;
}

bool ASHItemInvestigationExecutive::IsRotateItemBlocked() const {
    return false;
}

bool ASHItemInvestigationExecutive::IsExitBlocked() const {
    return false;
}

bool ASHItemInvestigationExecutive::IsAllActionsBlocked() const {
    return false;
}

void ASHItemInvestigationExecutive::HandlePreInvestigationSetupFinish() {
}


