#include "UCWButtonBase.h"

UUCWButtonBase::UUCWButtonBase() : UUserWidget(FObjectInitializer::Get()) {
    this->bIsFocusable = true;
    this->Blocked = false;
    this->bSelectable = false;
    this->bShouldSelectUponReceivingFocus = false;
    this->bInteractableWhenSelected = false;
    this->bToggleable = false;
}

void UUCWButtonBase::SetSelectedInternal(bool bInSelected, bool bAllowSound, bool bBroadcast) {
}

void UUCWButtonBase::SetIsToggleable(bool bInIsToggleable) {
}

void UUCWButtonBase::SetIsSelected(bool InSelected, bool bGiveClickFeedback) {
}

void UUCWButtonBase::SetIsSelectable(bool bInIsSelectable) {
}

void UUCWButtonBase::SetIsLocked(bool bInIsLocked) {
}

void UUCWButtonBase::SetIsInteractionEnabled(bool bInIsInteractionEnabled) {
}

void UUCWButtonBase::SetIsInteractableWhenSelected(bool bInInteractableWhenSelected) {
}

void UUCWButtonBase::SetIsFocusable(bool bInIsFocusable) {
}

bool UUCWButtonBase::IsInteractionEnabled() const {
    return false;
}

bool UUCWButtonBase::IsFocusable() const {
    return false;
}

bool UUCWButtonBase::GetSelected() const {
    return false;
}

bool UUCWButtonBase::GetLocked() const {
    return false;
}

void UUCWButtonBase::ClearSelection() {
}







