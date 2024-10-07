#include "BasicInputComponent.h"

UBasicInputComponent::UBasicInputComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Movement = NULL;
    this->Rotation = NULL;
    this->Cursor = NULL;
}


