#include "SHMariaFlashlightReactionAnimSubcomp.h"

USHMariaFlashlightReactionAnimSubcomp::USHMariaFlashlightReactionAnimSubcomp() {
    this->EyesCoverAlpha = 0.00f;
}

float USHMariaFlashlightReactionAnimSubcomp::GetEyesCoverAlpha() const {
    return 0.0f;
}

void USHMariaFlashlightReactionAnimSubcomp::BlockFlashlightReactions(const bool Blocked, const UObject* Object) {
}

void USHMariaFlashlightReactionAnimSubcomp::BlockAndInterruptFlashlightReactions(const UObject* Object) {
}


