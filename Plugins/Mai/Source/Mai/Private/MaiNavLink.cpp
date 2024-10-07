#include "MaiNavLink.h"
#include "Components/SphereComponent.h"

AMaiNavLink::AMaiNavLink(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PointLinks.AddDefaulted(1);
    this->bSmartLinkIsRelevant = true;
    this->_LinkStartCollision = CreateDefaultSubobject<USphereComponent>(TEXT("LinkStartCollision"));
    this->_LinkEndCollision = CreateDefaultSubobject<USphereComponent>(TEXT("LinkEndCollision"));
    this->_DebugLines = NULL;
    this->_PortalLength = 100.00f;
    this->_PortalWidth = 100.00f;
    this->_UsePrecision = 180.00f;
    this->_AutoAttachCollision = true;
    this->_CheckPortalSide = false;
    this->_LinkEndCollision->SetupAttachment(RootComponent);
    this->_LinkStartCollision->SetupAttachment(RootComponent);
}

void AMaiNavLink::UpdateNavMesh() {
}

void AMaiNavLink::TakeOwnership(APawn* Being) {
}



void AMaiNavLink::SetNavigationRelevancy(bool isRelevant) {
}

void AMaiNavLink::ReturnOwnership(APawn* Being) {
}

void AMaiNavLink::OnOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void AMaiNavLink::OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

bool AMaiNavLink::IsOnBeingPath(APawn* Being, bool checkFromNext) const {
    return false;
}

UNavLinkCustomComponent* AMaiNavLink::GetSmartLinkComp() const {
    return NULL;
}


void AMaiNavLink::ClearPathsForWaitingCharacters(bool startSide) {
}



