#include "SHEnemyBaseFXComponent.h"

USHEnemyBaseFXComponent::USHEnemyBaseFXComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BloodPuddleSettings = NULL;
    this->PenetrateSplashSettings = NULL;
    this->SplashPuddleSettings = NULL;
    this->BleedingSettings = NULL;
    this->VisualHPSettings = NULL;
    this->WaterInteractionSettings = NULL;
    this->RainWettingSettings = NULL;
}


