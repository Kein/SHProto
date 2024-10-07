#pragma once
#include "CoreMinimal.h"
#include "SHCollectedItemData.generated.h"

USTRUCT(BlueprintType)
struct FSHCollectedItemData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    FName ItemRowName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    int32 Quantity;
    
    SHPROTO_API FSHCollectedItemData();
};

