#include "BeingStatesComponent.h"
#include "Templates/SubclassOf.h"

UBeingStatesComponent::UBeingStatesComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UBeingStatesComponent::RemoveStatesByClass(TSubclassOf<UBeingState> stateClass) {
}

void UBeingStatesComponent::RemoveState(UBeingState* State) {
}

bool UBeingStatesComponent::IsStateActive(TSubclassOf<UBeingState> stateClass) const {
    return false;
}

UBeingState* UBeingStatesComponent::GetStateByClass(TSubclassOf<UBeingState> stateClass) {
    return NULL;
}

TArray<UBeingState*> UBeingStatesComponent::FindStatesByClass(TSubclassOf<UBeingState> stateClass) const {
    return TArray<UBeingState*>();
}

UBeingState* UBeingStatesComponent::FindStateByName(FName Name) const {
    return NULL;
}

UBeingState* UBeingStatesComponent::FindStateByClass(TSubclassOf<UBeingState> stateClass) const {
    return NULL;
}

UBeingState* UBeingStatesComponent::AddStateByClass(TSubclassOf<UBeingState> stateClass) {
    return NULL;
}

void UBeingStatesComponent::AddState(UBeingState* State, bool Activate) {
}

void UBeingStatesComponent::ActivateStateByClass(TSubclassOf<UBeingState> stateClass) {
}

void UBeingStatesComponent::AbortStateByClass(TSubclassOf<UBeingState> stateClass) {
}


