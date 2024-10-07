#include "SHCharacterPlayAimOffsetMatchingTool.h"

USHCharacterPlayAimOffsetMatchingTool::USHCharacterPlayAimOffsetMatchingTool() {
}

FVector USHCharacterPlayAimOffsetMatchingTool::GetMuzzleAimLocation() const {
    return FVector{};
}

FVector USHCharacterPlayAimOffsetMatchingTool::GetCrosshairAimLocation() const {
    return FVector{};
}

float USHCharacterPlayAimOffsetMatchingTool::GetCameraPitch() const {
    return 0.0f;
}

void USHCharacterPlayAimOffsetMatchingTool::FakeRotationInput(float X, float Y) {
}

void USHCharacterPlayAimOffsetMatchingTool::FakeAimInput(bool Pressed) {
}

void USHCharacterPlayAimOffsetMatchingTool::DrawMuzzleAimTrace(const UObject* WorldContextObject) {
}


