#include "TabBox.h"

UTabBox::UTabBox() {
    this->TabsChangeSound = NULL;
    this->Switcher = NULL;
    this->WrapChangeTab = true;
}

void UTabBox::SetSwitcher(UWidgetSwitcher* _Switcher) {
}

void UTabBox::SelectTab(int32 NewTab, ETabChangeCause ChangeCause) {
}

void UTabBox::PrevTab() {
}

void UTabBox::NextTab() {
}

int32 UTabBox::GetTabCount() const {
    return 0;
}


