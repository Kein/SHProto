#include "MaiBTDecorator_CheckActorGameplayTags.h"

UMaiBTDecorator_CheckActorGameplayTags::UMaiBTDecorator_CheckActorGameplayTags() {
    this->NodeName = TEXT("Gameplay Tags Observer");
    this->TagsToMatch = EGameplayContainerMatchType::Any;
}


