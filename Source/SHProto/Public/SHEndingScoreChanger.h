#pragma once
#include "CoreMinimal.h"
#include "ESHEndingType.h"
#include "SHEndingScoreChanger.generated.h"

USTRUCT(BlueprintType)
struct SHPROTO_API FSHEndingScoreChanger {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<ESHEndingType, int32> EndingScoreChangeMap;
    
    FSHEndingScoreChanger();
};

