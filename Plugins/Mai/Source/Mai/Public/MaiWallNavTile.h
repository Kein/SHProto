#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "MaiWallNavContour.h"
#include "MaiWallNavGeneration.h"
#include "MaiWallNavPolyLink.h"
#include "MaiWallNavSurface.h"
#include "MaiWallOffMeshConnection.h"
#include "MaiWallNavTile.generated.h"

UCLASS(EditInlineNew)
class MAI_API UMaiWallNavTile : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    int32 _AsyncPhase;
    
public:
    UPROPERTY()
    FMaiWallNavSurface _NavSurfs[6];
    
    UPROPERTY()
    TArray<FMaiWallNavContour> _NavCountours;
    
    UPROPERTY()
    TArray<FMaiWallNavPolyLink> _NavLinks;
    
    UPROPERTY()
    TArray<FMaiWallOffMeshConnection> _NavOffMeshConnections;
    
    UPROPERTY()
    int32 _TileID;
    
    UPROPERTY()
    int32 _CellsInRow;
    
    UPROPERTY()
    FVector _BoxOrigin;
    
    UPROPERTY()
    FVector _BoxExtent;
    
    UPROPERTY()
    int32 _Margin;
    
    UPROPERTY()
    FMaiWallNavGeneration _GenConfig;
    
    UMaiWallNavTile();

};

