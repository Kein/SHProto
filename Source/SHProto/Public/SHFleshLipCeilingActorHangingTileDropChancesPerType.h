#pragma once
#include "CoreMinimal.h"
#include "SHFleshLipCeilingActorHangingTileDropChances.h"
#include "SHFleshLipCeilingActorHangingTileDropChancesPerType.generated.h"

USTRUCT(BlueprintType)
struct FSHFleshLipCeilingActorHangingTileDropChancesPerType {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FSHFleshLipCeilingActorHangingTileDropChances MiddleTileDropChances;
    
    UPROPERTY(EditAnywhere)
    FSHFleshLipCeilingActorHangingTileDropChances EdgeTileDropChances;
    
    UPROPERTY(EditAnywhere)
    FSHFleshLipCeilingActorHangingTileDropChances CornerTileDropChances;
    
public:
    SHPROTO_API FSHFleshLipCeilingActorHangingTileDropChancesPerType();
};

