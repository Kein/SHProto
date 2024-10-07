#include "MaiFlyingComponent.h"

UMaiFlyingComponent::UMaiFlyingComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->_FlyingTimer = 0.00f;
    this->_FlyingLanding = false;
    this->_WantedSpeed = 0.00f;
    this->_FlyingGraph = NULL;
    this->_Character = NULL;
    this->_AcceptanceRadius = 10.00f;
    this->_MinSpeed = 30.00f;
    this->_StartSpeed = 60.00f;
    this->_InterpSpeed = 20.00f;
    this->_LandingDistance = 50.00f;
    this->_PathRebuildDistance = 100.00f;
    this->_SubGoalReachedDistance = 50.00f;
    this->_SubGoalCheckPeriod = 1.00f;
    this->_Debug = false;
}


