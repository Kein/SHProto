#include "SHHitReactionCooldownComponent.h"

USHHitReactionCooldownComponent::USHHitReactionCooldownComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PrintDebug = false;
}

void USHHitReactionCooldownComponent::SetCooldownTimerForHitReaction(ESHHitReactionResponseType Reaction, FName Variant) {
}

bool USHHitReactionCooldownComponent::IsReactionOnCooldown(ESHHitReactionResponseType Reaction, FName Variant) {
    return false;
}

TArray<FName> USHHitReactionCooldownComponent::GetVariantsOnCooldown(ESHHitReactionResponseType Reaction) {
    return TArray<FName>();
}


