#include "SHTraversalLadderAnimInstance.h"

USHTraversalLadderAnimInstance::USHTraversalLadderAnimInstance() {
    this->bHasLadderEvenNumberOfSteps = true;
    this->CharacterTraversalSide = ESHDetectionSide::Above;
    this->bPlayStartTraversal = false;
    this->bPlayEndTraversal = false;
    this->EndAnimAbove = NULL;
    this->EndAnimBelow = NULL;
    this->StartAnimAbove_OddNumberOfSteps = NULL;
    this->StartAnimAbove_EvenNumberOfSteps = NULL;
    this->StartAnimBelow = NULL;
    this->StepDelta = 33.00f;
    this->AboveFloorRelativeToStep = 9.25f;
    this->BelowFloorRelativeToStep = 2.75f;
}

void USHTraversalLadderAnimInstance::BroadcastEndOfTraversalStart() {
}

void USHTraversalLadderAnimInstance::BroadcastEndOfTraversalFinish() {
}


