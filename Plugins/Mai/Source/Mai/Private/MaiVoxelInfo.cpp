#include "MaiVoxelInfo.h"

FMaiVoxelInfo::FMaiVoxelInfo() {
    this->_Surface = EMaiVoxelSide::TOP;
    this->_Index = 0;
    this->_RawFlags = 0;
    this->_WalkableFlags = 0;
    this->_Dists[0] = 0;
    this->_Dists[1] = 0;
    this->_Dists[2] = 0;
    this->_Dists[3] = 0;
    this->_Dists[4] = 0;
    this->_Dists[5] = 0;
    this->_Regions[0] = 0;
    this->_Regions[1] = 0;
    this->_Regions[2] = 0;
    this->_Regions[3] = 0;
    this->_Regions[4] = 0;
    this->_Regions[5] = 0;
}

