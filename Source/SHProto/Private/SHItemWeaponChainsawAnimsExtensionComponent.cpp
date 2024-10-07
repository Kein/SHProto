#include "SHItemWeaponChainsawAnimsExtensionComponent.h"

USHItemWeaponChainsawAnimsExtensionComponent::USHItemWeaponChainsawAnimsExtensionComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->InDangerIntroAnimActionExeClass = NULL;
    this->InDangerOutroAnimActionExeClass = NULL;
}

void USHItemWeaponChainsawAnimsExtensionComponent::ProcessEquipWeaponMontageEndEvent(UAnimMontage* InMontage, ESHAnimEndType AnimEndType) {
}


