#pragma once
#include "CoreMinimal.h"
#include "SHBreakableGlassSizeAudioData.generated.h"

class UAkAudioEvent;

USTRUCT(BlueprintType)
struct FSHBreakableGlassSizeAudioData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MinGlassSurfaceArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAkAudioEvent* AkEventToPlayAtHit;
    
    SHPROTO_API FSHBreakableGlassSizeAudioData();
};

