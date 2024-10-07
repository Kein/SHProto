#pragma once
#include "CoreMinimal.h"
#include "MaiWallPathPoint.h"
#include "MaiWallOffMeshConnection.generated.h"

class UNavArea;

USTRUCT(BlueprintType)
struct MAI_API FMaiWallOffMeshConnection {
    GENERATED_BODY()
public:
    UPROPERTY()
    FMaiWallPathPoint _Left;
    
    UPROPERTY()
    FMaiWallPathPoint _Right;
    
    UPROPERTY()
    int32 _UserID;
    
    UPROPERTY(Instanced)
    UNavArea* _Area;
    
    UPROPERTY()
    uint8 _SnapHeight;
    
    UPROPERTY()
    uint8 _SnapRadius;
    
    UPROPERTY()
    uint8 _BorderSide;
    
    FMaiWallOffMeshConnection();
};

