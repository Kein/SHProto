#include "MaiWallNavMesh.h"
#include "MaiWallNavGenerator.h"

AMaiWallNavMesh::AMaiWallNavMesh(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->WallMeshGen = CreateDefaultSubobject<UMaiWallNavGenerator>(TEXT("WallMeshGen"));
}


