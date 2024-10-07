#pragma once
#include "CoreMinimal.h"
#include "AI/Navigation/NavigationDataChunk.h"
#include "MaiWallMeshTileData.h"
#include "MaiWallNavMeshDataChunk.generated.h"

UCLASS()
class MAI_API UMaiWallNavMeshDataChunk : public UNavigationDataChunk {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    TArray<FMaiWallMeshTileData> _Tiles;
    
public:
    UMaiWallNavMeshDataChunk();

};

