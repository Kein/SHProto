#include "BeingFootsIKComponent.h"

UBeingFootsIKComponent::UBeingFootsIKComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->_EnableFootIK = true;
    this->_ClampInCapsule = false;
    this->_TraceComplex = false;
    this->_DropCollisionChannel = ECC_Pawn;
    this->_FootCollisionChannel = ECC_Visibility;
    this->_QueryIgnoreMask = 0;
    this->_MaxStepHeight = 64.00f;
    this->_IKInterpSpeed = 15.00f;
    this->_DropInterpSpeed = 3.00f;
    this->_DropTraceRadius = 2.50f;
    this->_FootTraceRadius = 2.00f;
    this->_CacheRange = 6.00f;
    this->_FootRotationSpeed = 6.00f;
    this->_DropHeight = 0.00f;
    this->_DropFloor = 0.00f;
    this->_DropStep = 0.00f;
    this->_DropFloorTarget = 0.00f;
    this->_Character = NULL;
}

void UBeingFootsIKComponent::Update(float DeltaSeconds) {
}

void UBeingFootsIKComponent::RaiseFoot(EFoot foot) {
}

void UBeingFootsIKComponent::PutFoot(EFoot foot) {
}


