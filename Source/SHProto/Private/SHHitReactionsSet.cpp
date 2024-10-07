#include "SHHitReactionsSet.h"

USHHitReactionsSet::USHHitReactionsSet() {
    this->DeathVariantHitReactions.AddDefaulted(1);
    this->KnockdownVariantHitReactions.AddDefaulted(1);
    this->FalterVariantHitReactions.AddDefaulted(1);
    this->StaggerVariantHitReactions.AddDefaulted(1);
    this->NormalVariantHitReactions.AddDefaulted(1);
    this->TwitchVariantHitReactions.AddDefaulted(1);
}

TArray<TSoftObjectPtr<UObject>> USHHitReactionsSet::GetDeathSoftObjects() const {
    return TArray<TSoftObjectPtr<UObject>>();
}


