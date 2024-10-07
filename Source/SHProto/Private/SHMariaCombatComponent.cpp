#include "SHMariaCombatComponent.h"

USHMariaCombatComponent::USHMariaCombatComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BlackboardDangerModeKeyname = TEXT("DangerMode");
}

bool USHMariaCombatComponent::WasSaved() const {
    return false;
}

bool USHMariaCombatComponent::WasAttacked() const {
    return false;
}

bool USHMariaCombatComponent::IsInjured() const {
    return false;
}

bool USHMariaCombatComponent::IsInDanger() const {
    return false;
}

void USHMariaCombatComponent::InitBehaviors() {
}

void USHMariaCombatComponent::GrabStarted() {
}

void USHMariaCombatComponent::GrabFinished() {
}

void USHMariaCombatComponent::GrabAborted() {
}


