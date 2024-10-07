#pragma once
#include "CoreMinimal.h"
#include "SHFleshLipCeilingActorHangingTileDropChances.generated.h"

USTRUCT()
struct FSHFleshLipCeilingActorHangingTileDropChances {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float FourSideChance;
    
    UPROPERTY(EditAnywhere)
    float ThreeSideChance;
    
    UPROPERTY(EditAnywhere)
    float OppositeTwoSideChance;
    
    UPROPERTY(EditAnywhere)
    float DiagonalTwoSideChance;
    
public:
    SHPROTO_API FSHFleshLipCeilingActorHangingTileDropChances();
};

