#pragma once
#include "CoreMinimal.h"
#include "SHBreakableGlassNoiseConfig.generated.h"

USTRUCT(BlueprintType)
struct FSHBreakableGlassNoiseConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Aggro;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Range;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Loudness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName Tag;
    
    SHPROTO_API FSHBreakableGlassNoiseConfig();
};

