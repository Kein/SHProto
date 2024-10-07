#include "SHBreakableGlassComponent.h"

USHBreakableGlassComponent::USHBreakableGlassComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bSaveGame = true;
    this->bBrokenOnBeginPlay = false;
    this->bUseCustomFXData = false;
    this->bRegisterAsMeleeAttackSecondaryTarget = true;
    this->MaxAllowedHeightDelta = 50.00f;
    this->MaxAllowedDistanceToHitPoint2D = 125.00f;
    this->bIsDirectionalOneSideOnly = false;
    this->MinRequiredDirectionsDotProduct = 0.75f;
    this->bUseCustomGlassPlaneLocalDirectionsWhitelist = false;
    this->BrokenShardsContainer = NULL;
}

bool USHBreakableGlassComponent::IsBroken() const {
    return false;
}

void USHBreakableGlassComponent::FakeBreak(AController* EventInstigator, const FVector& InHitDir) {
}


