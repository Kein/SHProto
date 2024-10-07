#include "EditorTickableComponent.h"

UEditorTickableComponent::UEditorTickableComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bEditorOnlyTick = false;
}


