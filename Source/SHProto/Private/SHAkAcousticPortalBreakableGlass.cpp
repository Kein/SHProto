#include "SHAkAcousticPortalBreakableGlass.h"
#include "SHActorLevelObserverComponent.h"
#include "SHAkPortalOpenableComponent.h"

ASHAkAcousticPortalBreakableGlass::ASHAkAcousticPortalBreakableGlass(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<USHAkPortalOpenableComponent>(TEXT("PortalComponent"))) {
    // FIXME
    // this->ActorLevelObserverComponent = CreateDefaultSubobject<USHActorLevelObserverComponent>(TEXT("SHActorLevelObserverComponent"));
    // this->Portal->SetupAttachment(RootComponent);
    this->bUseMultipleGlassSupport = false;
    this->bFullOpenOnBreak = false;
    
}

void ASHAkAcousticPortalBreakableGlass::ProcessOnObservedActorAvailable(AActor* AvailableActor) {
}

void ASHAkAcousticPortalBreakableGlass::ProcessBreakableGlassOnBreakEvent(USHBreakableGlassComponent* BreakableGlassComponent) {
}


