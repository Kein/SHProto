#include "SHTraversalClimbAnimInstance.h"

USHTraversalClimbAnimInstance::USHTraversalClimbAnimInstance() {
    this->bPlayStartTraversal = false;
    this->EdgeDistance = 0.00f;
    this->DeltaHeight = 0.00f;
    this->AssignedClimbUpBlendSpace = NULL;
    this->AssignedJumpDownBlendSpace = NULL;
    this->bTraversalDataSetup = false;
}


bool USHTraversalClimbAnimInstance::IsOnLowerFloor() const {
    return false;
}

void USHTraversalClimbAnimInstance::BroadcastEndOfTraversal() {
}


