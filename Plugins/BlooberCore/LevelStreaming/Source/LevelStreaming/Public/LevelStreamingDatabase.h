#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "LevelStreamingActorData.h"
#include "LevelStreamingRuntimeActorData.h"
#include "LevelStreamingDatabase.generated.h"

class ULevelStreamingActorSerializer;
class ULevelStreamingRequestState;
class UStreamableLevelBatchState;
class UStreamableLevelState;
class UStreamableLevels;

UCLASS()
class LEVELSTREAMING_API ULevelStreamingDatabase : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    TArray<UStreamableLevels*> StreamableLevels;
    
    UPROPERTY(Transient)
    TArray<UStreamableLevelState*> Levels;
    
    UPROPERTY(Transient)
    TArray<UStreamableLevelBatchState*> Batches;
    
    UPROPERTY(Transient)
    TArray<ULevelStreamingRequestState*> Requests;
    
    UPROPERTY(Transient)
    ULevelStreamingActorSerializer* ActorSerializer;
    
    UPROPERTY(Transient)
    TArray<FLevelStreamingActorData> Actors;
    
    UPROPERTY(Transient)
    TArray<FLevelStreamingRuntimeActorData> RuntimeActors;
    
    UPROPERTY(Transient)
    bool IsUsingActorSerializer;
    
public:
    ULevelStreamingDatabase();

};

