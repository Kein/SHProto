#include "SplineDeformerComponent.h"

USplineDeformerComponent::USplineDeformerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
    this->_AutoConversionVersion = 0;
    this->EnableGeneration = true;
    this->DrawDebug = true;
}


