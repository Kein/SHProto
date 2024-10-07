#include "SHBreakableWallActor.h"
#include "Components/BoxComponent.h"
#include "Components/SceneComponent.h"
#include "SHAkDynamicTickComponent.h"
#include "SHAkPortalOpenableComponent.h"
#include "SHBreakableMeshComponent.h"
#include "SHSecondaryTargetComponent.h"

ASHBreakableWallActor::ASHBreakableWallActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bSaveGame = true;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->BreakableMeshMainComponent = CreateDefaultSubobject<USHBreakableMeshComponent>(TEXT("BreakableMeshMainComponent"));
    this->SecondaryTargetFrontComponent = CreateDefaultSubobject<USHSecondaryTargetComponent>(TEXT("SecondaryTargetFrontComponent"));
    this->SecondaryTargetBackComponent = CreateDefaultSubobject<USHSecondaryTargetComponent>(TEXT("SecondaryTargetBackComponent"));
    this->AkSoundComponent = CreateDefaultSubobject<USHAkDynamicTickComponent>(TEXT("AkSoundComponent"));
    this->PortalBoundsBoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("PortalBoundsBoxComponent"));
    this->AkPortalOpenableComponent = CreateDefaultSubobject<USHAkPortalOpenableComponent>(TEXT("AkPortalOpenableComponent"));
    this->VisualMeshesPivotComponent = CreateDefaultSubobject<USceneComponent>(TEXT("VisualMeshesPivotComponent"));
    this->BreakStepAudioEvent = NULL;
    this->LastBreakAudioEvent = NULL;
    this->AkPortalOpenableComponent->SetupAttachment(PortalBoundsBoxComponent);
    this->AkSoundComponent->SetupAttachment(BreakableMeshMainComponent);
    this->BreakableMeshMainComponent->SetupAttachment(RootComponent);
    this->PortalBoundsBoxComponent->SetupAttachment(BreakableMeshMainComponent);
    this->SecondaryTargetBackComponent->SetupAttachment(BreakableMeshMainComponent);
    this->SecondaryTargetFrontComponent->SetupAttachment(BreakableMeshMainComponent);
    this->VisualMeshesPivotComponent->SetupAttachment(RootComponent);
}

void ASHBreakableWallActor::ProcessBreakableMeshMainComponentBreakEvent(USHBreakableMeshComponent* InComponentPtr) {
}

bool ASHBreakableWallActor::IsBroken() const {
    return false;
}


