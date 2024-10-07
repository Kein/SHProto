#include "SHMandarinTransformationState.h"

USHMandarinTransformationState::USHMandarinTransformationState() {
    this->MandarinTransformationState = ESHMandarinTransformationState::Hanging;
}

FVector USHMandarinTransformationState::GetTransformationStateHeightOffset() const {
    return FVector{};
}

ESHMandarinTransformationState USHMandarinTransformationState::GetMandarinTransformationState() const {
    return ESHMandarinTransformationState::Hanging;
}


