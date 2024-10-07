#include "MaiActionPointQuery.h"

FMaiActionPointQuery::FMaiActionPointQuery() {
    this->_User = NULL;
    this->_FromGraph = false;
    this->_FromObjects = false;
    this->_CheckWeight = false;
    this->_SequenceOnly = false;
    this->_Usable = false;
    this->_Safe = false;
    this->_Radius = 0.00f;
}

