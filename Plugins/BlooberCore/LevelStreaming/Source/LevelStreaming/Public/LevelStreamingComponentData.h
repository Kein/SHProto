#pragma once
#include "CoreMinimal.h"
#include "LevelStreamingComponentData.generated.h"

USTRUCT(BlueprintType)
struct LEVELSTREAMING_API FLevelStreamingComponentData {
    GENERATED_BODY()
public:
    UPROPERTY(SaveGame)
    FName Name;
    
    UPROPERTY(SaveGame)
    TArray<uint8> Properties;
    
    FLevelStreamingComponentData();
};

