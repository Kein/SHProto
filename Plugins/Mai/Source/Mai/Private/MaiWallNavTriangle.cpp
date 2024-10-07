#include "MaiWallNavTriangle.h"

FMaiWallNavTriangle::FMaiWallNavTriangle() {
    this->_FirstLink = 0;
    this->_PointIdx[0] = 0;
    this->_PointIdx[1] = 0;
    this->_PointIdx[2] = 0;
    this->_NeigsIdx[0] = 0;
    this->_NeigsIdx[1] = 0;
    this->_NeigsIdx[2] = 0;
    this->_RegionIdx = 0;
    this->_AreaType = 0;
    this->_Flags = 0;
}

