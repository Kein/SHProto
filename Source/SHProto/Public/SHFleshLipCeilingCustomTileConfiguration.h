#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "SHFleshLipCeilingCustomTileConfiguration.generated.h"

class ASHFleshLipCeilingTileActor;

USTRUCT(BlueprintType)
struct FSHFleshLipCeilingCustomTileConfiguration {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 TileX;
    
    UPROPERTY(EditAnywhere)
    int32 TileY;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<ASHFleshLipCeilingTileActor> CeilingTileActor;
    
    SHPROTO_API FSHFleshLipCeilingCustomTileConfiguration();
};

