#include "UCWWidgetGroup.h"

UUCWWidgetGroup::UUCWWidgetGroup() {
    this->bSelectionRequired = false;
}

void UUCWWidgetGroup::SetSelectionRequired(bool bRequireSelection) {
}

void UUCWWidgetGroup::SelectPreviousButton(bool bAllowWrap) {
}

void UUCWWidgetGroup::SelectNextButton(bool bAllowWrap) {
}

void UUCWWidgetGroup::SelectButtonAtIndex(int32 ButtonIndex, const bool bAllowSound) {
}

bool UUCWWidgetGroup::HasAnyButtons() const {
    return false;
}

int32 UUCWWidgetGroup::GetSelectedButtonIndex() const {
    return 0;
}

UUCWButtonBase* UUCWWidgetGroup::GetSelectedButtonBase() const {
    return NULL;
}

int32 UUCWWidgetGroup::GetHoveredButtonIndex() const {
    return 0;
}

int32 UUCWWidgetGroup::GetButtonCount() const {
    return 0;
}

UUCWButtonBase* UUCWWidgetGroup::GetButtonBaseAtIndex(int32 Index) const {
    return NULL;
}

int32 UUCWWidgetGroup::FindButtonIndex(const UUCWButtonBase* ButtonToFind) const {
    return 0;
}

void UUCWWidgetGroup::DeselectAll() {
}


