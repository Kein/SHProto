#include "BeingFootmarkGenerator.h"

UBeingFootmarkGenerator::UBeingFootmarkGenerator(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->_TraceComplex = false;
    this->_TraceChannel = ECC_WorldStatic;
    this->_TraceIgnoreMask = 0;
    this->_TraceDownLength = 100.00f;
    this->_TraceInterval = 0.50f;
    this->_MaskMaterial = NULL;
    this->_TrailsMaterial = NULL;
    this->_FootmarkDrawTrails = false;
    this->_DrawFootmarksMask = true;
    this->_FootmarkQuadSize = 30.00f;
    this->_TrailQuadSize = 25.00f;
    this->_TrailQuadWidth = 30.00f;
    this->_FootmarkQuadYScale = 1.00f;
    this->_FootmarkAngleOffset = 0.00f;
    this->_TrailsTiling = 100.00f;
    this->_TrailsAngleOffset = 0.00f;
    this->_FootmarkCanvasDensity = 128.00f;
    this->_FootmarkHeightLimit = 250.00f;
    this->_FootmarkLifeTime = 60.00f;
    this->_FootmarksLimit = 128;
    this->_TrailsLimit = 192;
}


