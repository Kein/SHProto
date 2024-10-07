#include "SHAnimWholeBodyTranslationSubcomp.h"

USHAnimWholeBodyTranslationSubcomp::USHAnimWholeBodyTranslationSubcomp() {
    this->AdditionalTranslationAlphaTarget = 0.00f;
    this->AdditionalTranslationAlpha = 0.00f;
}

void USHAnimWholeBodyTranslationSubcomp::SetAdditionalTranslation(FWholeBodyTranslation InAdditionalRotationTarget) {
}

void USHAnimWholeBodyTranslationSubcomp::SetAdditionalRotation(FRotator NewRotation) {
}

void USHAnimWholeBodyTranslationSubcomp::ResetAdditionalTranslation() {
}

FWholeBodyTranslation USHAnimWholeBodyTranslationSubcomp::CheckOnGroundAdditionalRotation() {
    return FWholeBodyTranslation{};
}


