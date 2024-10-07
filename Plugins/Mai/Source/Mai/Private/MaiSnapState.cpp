#include "MaiSnapState.h"

UMaiSnapState::UMaiSnapState() {
    this->_EasingFunc = EEasingFunc::EaseInOut;
}

void UMaiSnapState::Config2(FVector Location, FVector faceTo, float Timeout, TEnumAsByte<EEasingFunc::Type> easingFunc) {
}

void UMaiSnapState::Config(FVector Location, AActor* faceTo, float Timeout, TEnumAsByte<EEasingFunc::Type> easingFunc) {
}


