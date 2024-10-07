#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Wading.generated.h"

class UFXSystemAsset;

USTRUCT(BlueprintType)
struct BEING_API FWading {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSoftObjectPath _SoundAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSoftObjectPath _DelayTimes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float _MinDepth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float _MaxDepth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UFXSystemAsset* _Particle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool _FireAndForgetFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 _TranslucentSortPriority;
    
    FWading();
};

