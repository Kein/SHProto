#include "MaiSettings.h"

UMaiSettings::UMaiSettings() {
    this->_PartiesCount = 6;
    this->_Parties.AddDefaulted(5);
    this->_Attitudes.AddDefaulted(3);
    this->_TokenTypesCount = 4;
    this->_TokenTypes.AddDefaulted(4);
}


