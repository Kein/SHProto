#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "LevelStreamingComponentData.h"
#include "StreamableLevelHandle.h"
#include "LevelStreamingRuntimeActorData.generated.h"

USTRUCT(BlueprintType)
struct LEVELSTREAMING_API FLevelStreamingRuntimeActorData {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    UClass* Class;
    
    UPROPERTY(SaveGame)
    FSoftClassPath ClassPath;
    
    UPROPERTY(SaveGame)
    FString StringClassReference;
    
public:
    UPROPERTY(SaveGame)
    FStreamableLevelHandle LevelHandle;
    
    UPROPERTY(SaveGame)
    FGuid Guid;
    
    UPROPERTY(SaveGame)
    TArray<uint8> Properties;
    
    UPROPERTY(SaveGame)
    TArray<FLevelStreamingComponentData> Components;
    
    FLevelStreamingRuntimeActorData();
};

