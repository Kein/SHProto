#include "MaiPartyAttitudeData.h"

FMaiPartyAttitudeData::FMaiPartyAttitudeData() {
    this->_Party1 = EMaiParty::PARTY_0;
    this->_Party2 = EMaiParty::PARTY_0;
    this->_Attitude = EPartyAttitude::Unknown;
    this->_Mirrored = false;
}

