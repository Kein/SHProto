#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "LevelStreamingCachedActorData.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct LEVELSTREAMING_API FLevelStreamingCachedActorData {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FSoftClassPath Class;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TSoftObjectPtr<AActor> Actor;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FGuid Guid;
    
public:
    FLevelStreamingCachedActorData();
};

