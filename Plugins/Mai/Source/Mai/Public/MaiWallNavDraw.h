#pragma once
#include "CoreMinimal.h"
#include "MaiVoxelInfo.h"
#include "MaiWallNavDraw.generated.h"

USTRUCT(BlueprintType)
struct MAI_API FMaiWallNavDraw {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float _Range;
    
    UPROPERTY(EditAnywhere)
    bool _TileBounds;
    
    UPROPERTY(EditAnywhere)
    bool _RawVoxels;
    
    UPROPERTY(EditAnywhere)
    bool _WalkableVoxels;
    
    UPROPERTY(EditAnywhere)
    bool _Distances;
    
    UPROPERTY(EditAnywhere)
    bool _Regions;
    
    UPROPERTY(EditAnywhere)
    bool _VoxelContours;
    
    UPROPERTY(EditAnywhere)
    bool _VectorContours;
    
    UPROPERTY(EditAnywhere)
    bool _NavMesh;
    
    UPROPERTY(EditAnywhere)
    bool _Links;
    
    UPROPERTY(EditAnywhere)
    uint8 _RegionsMinLevel;
    
    UPROPERTY(EditAnywhere)
    uint8 _SideFlag;
    
    UPROPERTY(EditAnywhere)
    FMaiVoxelInfo _SelectedVoxel;
    
    FMaiWallNavDraw();
};

