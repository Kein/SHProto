#include "SHEnemyTransformationState.h"

USHEnemyTransformationState::USHEnemyTransformationState() {
    this->TransformationDuration = 0.50f;
    this->TransformToLying = false;
    this->LyingTransformationDelay = 0.00f;
    this->ForceLyingTransfirmationUpdate = false;
    this->LyingCapsuleAnchorPosition = 0.00f;
    this->MaximumLyingCapsuleExtensions = 1.00f;
    this->bAvoidCollisionsAfterTransforming = false;
    this->bAvoidCollisionsWhenTransforming = true;
    this->bAlignLyingCapsuleToSurface = true;
    this->bPreventControllerRotation = false;
    this->bRotateActorToDesiredMovement = false;
    this->HitReactionsChangeDelay = 0.00f;
}


