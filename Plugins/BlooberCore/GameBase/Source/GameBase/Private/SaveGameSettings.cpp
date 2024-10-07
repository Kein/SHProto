#include "SaveGameSettings.h"

USaveGameSettings::USaveGameSettings() {
    this->MaxSaveSlotsNumber = 13;
    this->AutoSaveSlotsNumber = 3;
    this->SaveIconOnlyInFullSave = false;
    this->SaveIconShowTime = 2.00f;
}


