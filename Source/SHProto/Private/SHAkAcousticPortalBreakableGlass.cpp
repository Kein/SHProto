#include "SHAkAcousticPortalBreakableGlass.h"
#include "SHActorLevelObserverComponent.h"
#include "SHAkPortalOpenableComponent.h"

ASHAkAcousticPortalBreakableGlass::ASHAkAcousticPortalBreakableGlass(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<USHAkPortalOpenableComponent>(TEXT("PortalComponent"))) {
    this->ActorLevelObserverComponent = CreateDefaultSubobject<USHActorLevelObserverComponent>(TEXT("SHActorLevelObserverComponent"));
    this->bUseMultipleGlassSupport = false;
    this->bFullOpenOnBreak = false;
    this->Portal->SetupAttachment(RootComponent);
}

void ASHAkAcousticPortalBreakableGlass::ProcessOnObservedActorAvailable(AActor* AvailableActor) {
}

void ASHAkAcousticPortalBreakableGlass::ProcessBreakableGlassOnBreakEvent(USHBreakableGlassComponent* BreakableGlassComponent) {
}


