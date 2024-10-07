#include "MaiCoverComponent.h"

UMaiCoverComponent::UMaiCoverComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->_FullCover = false;
}

void UMaiCoverComponent::OnOverlapEnd(AActor* OverlappedActor, AActor* OtherActor) {
}

void UMaiCoverComponent::OnOverlapBegin(AActor* OverlappedActor, AActor* OtherActor) {
}

bool UMaiCoverComponent::IsUserInCover(UMaiCoverUser* User) {
    return false;
}

bool UMaiCoverComponent::IsActorInCover(AActor* Actor) {
    return false;
}


