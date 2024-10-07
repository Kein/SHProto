#include "SHCharacterPlayMPCGameplayComponent.h"

USHCharacterPlayMPCGameplayComponent::USHCharacterPlayMPCGameplayComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AssetMPC = NULL;
    this->FlashlightAlphaMPCParamName = TEXT("FlashlightAlpha");
    this->LerpItemEmissiveMPCParamName = TEXT("LerpItemEmissive");
}


