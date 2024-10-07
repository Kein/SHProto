#include "SHHitReactionStatesContext.h"

USHHitReactionStatesContext::USHHitReactionStatesContext() {
    this->OwningHitReactionSubcomponent = NULL;
    this->OwningAnimComponent = NULL;
    this->AssignedAsyncLoader = NULL;
}

void USHHitReactionStatesContext::MontagePlayerAnimationStopped(UAnimMontage* InMontage, ESHAnimEndType InAnimEndType) {
}


