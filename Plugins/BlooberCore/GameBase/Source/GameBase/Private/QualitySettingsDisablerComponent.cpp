#include "QualitySettingsDisablerComponent.h"

UQualitySettingsDisablerComponent::UQualitySettingsDisablerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
    this->ReverseCondition = false;
    this->Tagless = false;
    this->EnabledOnQualityLow = true;
    this->EnabledOnQualityMedium = true;
    this->EnabledOnQualityHigh = true;
    this->EnabledOnQualityEpic = true;
    this->EnabledOnRaytracing = true;
    this->EnabledOnDesktop = true;
    this->EnabledOnXBox1 = true;
    this->EnabledOnXBox1X = true;
    this->EnabledOnPS4 = true;
    this->EnabledOnPS4Pro = true;
    this->EnabledOnPS5 = true;
    this->EnabledOnScarlet = true;
    this->EnabledOnLockhart = true;
}


