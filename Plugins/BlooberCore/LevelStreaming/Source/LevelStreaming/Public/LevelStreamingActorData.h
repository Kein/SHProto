#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "LevelStreamingComponentData.h"
#include "LevelStreamingActorData.generated.h"

USTRUCT(BlueprintType)
struct LEVELSTREAMING_API FLevelStreamingActorData {
    GENERATED_BODY()
public:
    UPROPERTY()
    FGuid Guid;
    
    UPROPERTY()
    TArray<uint8> Properties;
    
    UPROPERTY()
    TArray<FLevelStreamingComponentData> Components;
    
    FLevelStreamingActorData();
};

