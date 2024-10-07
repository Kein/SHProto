#pragma once
#include "CoreMinimal.h"
#include "ESHMapsEnum.h"
#include "SHMapFogRevealObjectData.generated.h"

USTRUCT(BlueprintType)
struct FSHMapFogRevealObjectData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    FName ObjectID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    ESHMapsEnum Map;
    
    SHPROTO_API FSHMapFogRevealObjectData();
};

