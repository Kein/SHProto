#include "MaiWallNavGenerator.h"

UMaiWallNavGenerator::UMaiWallNavGenerator(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->_DefaultNavigationFilterClass = NULL;
    this->_BuildingTilesNum = 0;
    this->_InnerRadius = 0.00f;
    this->_OuterRadius = 100.00f;
    this->_Count = 1.00f;
    this->_AvoidDistance = 500.00f;
    this->_AvoidCost = 10.00f;
    this->_OnFloor = true;
    this->_OnWall = true;
    this->_OnCeil = true;
    this->_FloorCost = 1.00f;
    this->_WallCost = 1.00f;
    this->_CeilCost = 1.00f;
}

void UMaiWallNavGenerator::Test_SlicedFindPath() {
}

void UMaiWallNavGenerator::Test_IsOnNavMesh() const {
}

void UMaiWallNavGenerator::Test_GenerateGrid() const {
}

void UMaiWallNavGenerator::Test_FindRandomReachable() const {
}

void UMaiWallNavGenerator::Test_FindPath() const {
}

void UMaiWallNavGenerator::Test_FindNearest() const {
}

void UMaiWallNavGenerator::Test_CanGoto() const {
}

void UMaiWallNavGenerator::RebuildNavMesh() {
}

void UMaiWallNavGenerator::RebuildCell() {
}

void UMaiWallNavGenerator::BuildNavMesh() {
}


