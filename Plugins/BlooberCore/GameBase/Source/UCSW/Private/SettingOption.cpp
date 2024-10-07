#include "SettingOption.h"

FSettingOption::FSettingOption() {
    this->Flags = 0;
    this->PropertyType = ESettingsPropertyType::Custom;
    this->CtrlType = ESettingsWidgetType::Spiner;
}

