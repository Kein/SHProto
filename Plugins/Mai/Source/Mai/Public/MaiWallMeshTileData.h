#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MaiWallNavPolyLink.h"
#include "MaiWallNavSurface.h"
#include "MaiWallOffMeshConnection.h"
#include "MaiWallMeshTileData.generated.h"

USTRUCT(BlueprintType)
struct MAI_API FMaiWallMeshTileData {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 _TileID;
    
    UPROPERTY()
    FVector _BoxOrigin;
    
    UPROPERTY()
    FVector _BoxExtent;
    
    UPROPERTY()
    int32 _Margin;
    
    UPROPERTY()
    FMaiWallNavSurface _NavSurfs[6];
    
    UPROPERTY()
    TArray<FMaiWallNavPolyLink> _NavLinks;
    
    UPROPERTY()
    TArray<FMaiWallOffMeshConnection> _NavOffMeshConnections;
    
    FMaiWallMeshTileData();
};

