#pragma once
#include "CoreMinimal.h"
#include "SHFleshLipCeilingTileShakePhysics.h"
#include "SHFleshLipCeilingTile.generated.h"

class ASHFleshLipCeilingTileActor;

USTRUCT(BlueprintType)
struct FSHFleshLipCeilingTile {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    ASHFleshLipCeilingTileActor* TileActor;
    
    UPROPERTY()
    FSHFleshLipCeilingTileShakePhysics TileShakePhysics;
    
public:
    SHPROTO_API FSHFleshLipCeilingTile();
};

