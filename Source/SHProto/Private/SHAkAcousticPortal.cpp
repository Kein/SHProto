#include "SHAkAcousticPortal.h"
#include "SHAkPortalComponent.h"

ASHAkAcousticPortal::ASHAkAcousticPortal(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Portal = CreateDefaultSubobject<USHAkPortalComponent>(TEXT("PortalComponent"));
    this->Portal->SetupAttachment(RootComponent);
}


