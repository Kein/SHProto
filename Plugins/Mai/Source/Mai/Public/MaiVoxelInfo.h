#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EMaiVoxelSide.h"
#include "MaiVoxelInfo.generated.h"

USTRUCT()
struct MAI_API FMaiVoxelInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EMaiVoxelSide::Type> _Surface;
    
    UPROPERTY(VisibleInstanceOnly)
    int32 _Index;
    
    UPROPERTY(VisibleInstanceOnly)
    FIntVector _Coords;
    
    UPROPERTY(VisibleInstanceOnly)
    FIntVector _TileCoords;
    
    UPROPERTY(VisibleInstanceOnly)
    uint8 _RawFlags;
    
    UPROPERTY(VisibleInstanceOnly)
    uint8 _WalkableFlags;
    
    UPROPERTY(VisibleInstanceOnly)
    uint8 _Dists[6];
    
    UPROPERTY(VisibleInstanceOnly)
    uint8 _Regions[6];
    
    FMaiVoxelInfo();
};

