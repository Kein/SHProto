#include "SHBossBaseFXComponent.h"

USHBossBaseFXComponent::USHBossBaseFXComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PenetrateSplashSettings = NULL;
    this->SplashPuddleSettings = NULL;
    this->BleedingSettings = NULL;
    this->VisualHPSettings = NULL;
}


