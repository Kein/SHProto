#pragma once
#include "CoreMinimal.h"
#include "SHHitReactionStateSerializedData.h"
#include "SHHitReactionSubcomponentSerializedData.generated.h"

USTRUCT(BlueprintType)
struct SHPROTO_API FSHHitReactionSubcomponentSerializedData {
    GENERATED_BODY()
public:
    UPROPERTY(SaveGame)
    TArray<FSHHitReactionStateSerializedData> HitReactionStates;
    
    FSHHitReactionSubcomponentSerializedData();
};

