#include "SHInteractionIconManagerComponent.h"

USHInteractionIconManagerComponent::USHInteractionIconManagerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->IconWidgetClass = NULL;
    this->IconCount = 24;
    this->IconZOrder = 1;
    this->IconDistanceScaleCurve = NULL;
    this->IconFovScaleCurve = NULL;
    this->IconScaleResolutionCurve = NULL;
    this->IconScaleMultiplier = 1.00f;
    this->IconTemporalDisableOpacityMultiplier = 0.20f;
    this->GameTextsConfig = NULL;
}


