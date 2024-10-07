#include "MaiWallSystem.h"

UMaiWallSystem::UMaiWallSystem() {
}

bool UMaiWallSystem::RaycastOnWallMesh(FVector& HitPoint, FVector Start, FVector Destination, FVector startUp, FVector destUp) const {
    return false;
}

bool UMaiWallSystem::ProjectPointOnWallMesh(FVector& outpoint, FVector Pos, FVector Up, FVector Extent, FVector Offset) const {
    return false;
}

bool UMaiWallSystem::IsOnWallMesh(FVector Pos, FVector Up, FVector Extent) const {
    return false;
}

UMaiWallSystem* UMaiWallSystem::getWallSystem(UObject* WorldContext) {
    return NULL;
}

bool UMaiWallSystem::FindReachablePointOnWallMesh(FVector& outpoint, float Radius, FVector Pos, FVector Up) const {
    return false;
}

bool UMaiWallSystem::FindRandomPointOnWallMesh(FVector& outpoint, float Radius, FVector Pos, FVector Up, FVector Extent) const {
    return false;
}

void UMaiWallSystem::AIWallMesh_RebuildCell() {
}


