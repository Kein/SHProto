#include "MaiWallNavDraw.h"

FMaiWallNavDraw::FMaiWallNavDraw() {
    this->_Range = 0.00f;
    this->_TileBounds = false;
    this->_RawVoxels = false;
    this->_WalkableVoxels = false;
    this->_Distances = false;
    this->_Regions = false;
    this->_VoxelContours = false;
    this->_VectorContours = false;
    this->_NavMesh = false;
    this->_Links = false;
    this->_RegionsMinLevel = 0;
    this->_SideFlag = 0;
}

